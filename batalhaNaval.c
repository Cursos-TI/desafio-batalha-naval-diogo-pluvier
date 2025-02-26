#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    int i, j;
    char letras[] = "ABCDEFGHIJ";

    // Inicializa o tabuleiro com 0 (água)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Declara e posiciona os navios
    int navio1[3] = {3, 3, 3}; // Navio horizontal
    int navio2[3] = {3, 3, 3}; // Navio vertical

    // Posição inicial do navio horizontal (linha 2, coluna 4 -> E)
    int linha1 = 1, coluna1 = 4; // Começa na linha 2 (índice 1) e coluna E (índice 4)
    for (i = 0; i < 3; i++) {
        tabuleiro[linha1][coluna1 + i] = navio1[i]; // Preenche horizontalmente
    }

    // Posição inicial do navio vertical (linha 5, coluna 7 -> H)
    int linha2 = 4, coluna2 = 7; // Começa na linha 5 (índice 4) e coluna H (índice 7)
    for (i = 0; i < 3; i++) {
        tabuleiro[linha2 + i][coluna2] = navio2[i]; // Preenche verticalmente
    }

    // Imprime cabeçalho das colunas
    printf("   ");
    for (i = 0; i < 10; i++) {
        printf("%c ", letras[i]);
    }
    printf("\n");

    // Exibe o tabuleiro com numeração lateral
    for (i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Numeração lateral (1 a 10)
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
