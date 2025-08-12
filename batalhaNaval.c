#include <stdio.h>

#define linhas 10
#define colunas 10

#define linhasHabilidades 5
#define colunasHabilidades 5

int main() {

		// Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

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


    for (int x = 0; x < linhasHabilidades; x++) { // cone
        for (int y = 0; y < colunasHabilidades; y++) {
            if (
                (x == 0 && y == 2)
                ||
                (x == 1 && (y >= 1 && y <= 3))
                ||
                (x == 2 && (y >= 0 && y <= 4))
            ) {
                int origemX = 2;
                int origemY = 3;

                int tabX = origemX + x;
                int tabY = origemY + (y - 2);

                if (tabX >= 0 && tabX < linhas && tabY >= 0 && tabY < colunas) {
                    campoBatalhaNaval[tabX][tabY] = 5;
                }
            }
        }
    }


    for (int x = 0; x < linhasHabilidades; x++) { // cruz
        for (int y = 0; y < colunasHabilidades; y++) {
            if (x != 2) {
                int origemX = 0;
                int origemY = 7;

                int tabX = origemX + x;

                campoBatalhaNaval[tabX][origemY] = 5;
            } else if (x == 2) {
                int origemX = 2;
                int origemY = colunasHabilidades;
                int tabY = origemY + y;

                campoBatalhaNaval[origemX][tabY] = 5;
            }
        }
    }


    for (int x = 0; x < linhasHabilidades; x++) { // octaedro
        for (int y = 0; y < colunasHabilidades; y++) {
            if (
                (x == 0 && y == 2)
                ||
                (x == 1 && (y >= 1 && y <= 3))
                ||
                (x == 2 && (y >= 0 && y <= 4))
                ||
                (x == 3 && (y >= 1 && y <= 3))
                ||
                (x == 4 && y == 2)
            ) {
                int origemX = 5;
                int origemY = 5;

                int tabX = origemX + x;
                int tabY = origemY + (y - 2);

                if (tabX >= 0 && tabX < linhas && tabY >= 0 && tabY < colunas) {
                    campoBatalhaNaval[tabX][tabY] = 5;
                }
            }
        }
    }


    printf("\n\n");


    for (int i = 0; i < linhas; i++) {  // mostra o campo
        for (int j = 0; j < colunas; j++) {
            printf(" %d ", campoBatalhaNaval[i][j]);
        }
        printf("\n");
    }

    return 0;
}