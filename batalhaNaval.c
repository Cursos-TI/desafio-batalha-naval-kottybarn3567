#include <stdio.h>

// declarando constantes pra valores mais acessiveis sem erros.
#define linhas 10
#define colunas 10

int main() {

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    int campoBatalhaNaval[linhas][colunas] = {0}; // deixa todos os valores como 0

    for (int x = 2; x < 2 + 3; x++) { // navio na vertical
        campoBatalhaNaval[x][1] = 3;
    }

    for (int x = 6; x < 6 + 3; x++) { // navio na horizontal
        campoBatalhaNaval[8][x] = 3;
    }

    for (int x = 1, y = 8; x < 1 + 4; x++, y--) { // navio na diagonal
        campoBatalhaNaval[x][y] = 3;
    }

    for (int x = 6, y = 1; x < 6 + 3; x++, y++) { // navio na diagonal
        campoBatalhaNaval[x][y] = 3;
    }

    printf("\n\n");

    for (int i = 0; i < linhas; i++) { // mostra o "campo"
        for (int j = 0; j < colunas; j++) {
            printf("%d \t", campoBatalhaNaval[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}