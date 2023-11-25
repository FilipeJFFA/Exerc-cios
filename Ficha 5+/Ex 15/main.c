#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimirTabuleiro(char tabuleiro[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < 2) {
                printf("|");
            }
        }
        printf("\n");
        if (i < 2) {
            printf("-----------\n");
        }
    }
    printf("\n");
}

int verificarVitoria(char tabuleiro[3][3], char jogador) {
    for (int i = 0; i < 3; i++) {
        if ((tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) ||
            (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador)) {
            return 1; 
        }
    }

    if ((tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) ||
        (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador)) {
        return 1;
    }

    return 0;
}


int tabuleiroCheio(char tabuleiro[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1; 
}

void jogadaComputador(char tabuleiro[3][3]) {
    int linha, coluna;
    do {
        linha = rand() % 3;
        coluna = rand() % 3;
    } while (tabuleiro[linha][coluna] != ' ');

    tabuleiro[linha][coluna] = 'O';
}

int main() {
    char tabuleiro[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    int linha, coluna;

    srand(time(NULL)); 

    do {
        
        imprimirTabuleiro(tabuleiro);
        printf("Sua vez (linha e coluna, de 0 a 2): ");
        scanf("%d %d", &linha, &coluna);

        if (linha < 0 || linha >= 3 || coluna < 0 || coluna >= 3 || tabuleiro[linha][coluna] != ' ') {
            printf("Posição inválida. Tente novamente.\n");
            continue;
        }

        tabuleiro[linha][coluna] = 'X';

        if (verificarVitoria(tabuleiro, 'X')) {
            imprimirTabuleiro(tabuleiro);
            printf("Parabéns! Você venceu!\n");
            break;
        }

   
        if (tabuleiroCheio(tabuleiro)) {
            imprimirTabuleiro(tabuleiro);
            printf("Empate!\n");
            break;
        }

        jogadaComputador(tabuleiro);

    
        if (verificarVitoria(tabuleiro, 'O')) {
            imprimirTabuleiro(tabuleiro);
            printf("Você perdeu! O computador venceu.\n");
            break;
        }

    } while (!tabuleiroCheio(tabuleiro));

    return 0;
}
