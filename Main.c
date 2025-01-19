#include <stdio.h>
#include <stdlib.h>

#define N 8
int tabuleiro[N];
int contagemSolucoes = 0;

// prototipo das funções
int posicaoValida(int linha, int coluna);
void posicaoRainha(int linha);
void printSolucao();

int main() {
    int escolha;
    printf("Problema das 8 Rainhas\n");
    posicaoRainha(0);
    printf("Número total de soluções: %d\n", contagemSolucoes);

    return 0;
}

void posicaoRainha(int linha) {
    if (linha == N) {
        contagemSolucoes++;
        printSolucao();
        return;
    }

    for (int coluna = 0; coluna < N;coluna++) {
        if (posicaoValida(linha, coluna)) {
            tabuleiro[linha] = coluna;
            posicaoRainha(linha + 1);
        }
    }
}

int posicaoValida(int linha, int coluna) {
    for (int i = 0;i < linha;i++) {
        if (tabuleiro[i] == coluna || abs(tabuleiro[i] - coluna) == abs(i - linha)) {
            return 0;
        }
    }
    return 1;
}

void printSolucao() {
    printf("=== Solução %d ===\n", contagemSolucoes);
    for (int i = 0; i < N;i++) {
        for (int j = 0;j < N;j++) {
            if (tabuleiro[i] == j) {
                printf("Q ");
            } else {
                printf(". ");
            }
        }
        printf("\n");
    }
    printf("==================\n\n");
}