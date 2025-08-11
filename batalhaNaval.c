#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // ====================================================================================================================

    /*
    int campoBatalhaNaval[10][10];

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) { // vai de 0 ate 9, entao nao podemos usar <=
                campoBatalhaNaval[i][j] = 0;
            }
        }
    */

    // MANEIRA SIMPLIFICADA

    int campoBatalhaNaval[10][10] = {0};

    for (int x = 2; x < 2 + 3; x++) {
        campoBatalhaNaval[x][1] = 3;
    }

    for (int x = 6; x < 6 + 3; x++) {
        campoBatalhaNaval[8][x] = 3;
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d \t", campoBatalhaNaval[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}

// ====================================================================================================================