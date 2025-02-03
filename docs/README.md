# Problema das 8 Rainhas

O problema das 8 rainhas é um quebra-cabeça clássico que desafia a encontrar todas as
formas possı́veis de colocar oito rainhas em um tabuleiro de xadrez 8 × 8 sem que nenhuma
delas seja capaz de atacar outra. Isso significa que nenhuma rainha pode estar na mesma
linha, coluna ou diagonal que outra rainha. Este problema é um excelente exemplo para
demonstrar algoritmos de ***backtracking*** e o uso eficiente de ***estruturas de dados***.

## Objetivos da Atividade
Esta atividade tem como objetivos:
- Compreender e aplicar algoritmos de backtracking para resolver problemas de busca.
- Implementar estruturas de dados adequadas para representar o tabuleiro e as posições
das rainhas.

## Como Funciona

O algoritmo de backtracking tenta colocar uma rainha em cada linha do tabuleiro. Para cada linha, ele verifica todas as colunas e valida se a posição é segura. Se for segura, a rainha é posicionada e o algoritmo tenta a próxima linha. Se em algum ponto não for possível colocar uma rainha, o algoritmo volta (faz backtracking) e tenta uma nova posição na linha anterior. Quando todas as 8 rainhas são posicionadas corretamente, uma solução válida é encontrada.

## Exemplo de Saída

![Foto da Saída no Console](/docs/docs.png)

...

Número total de soluções: 92
## Como Rodar o Projeto

1. **Clone o repositório:**
   ```bash
   https://github.com/henrymzs/8-Queens-Problem.git
2. **Compile o Código em C:**
   ```bash
   gcc Main.c -o Main
2. **Execute o programa:**
   ```bash
   ./Main
