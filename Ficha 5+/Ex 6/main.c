#include <stdio.h>

void trocolindo(float valor, float total) {
    int caixa[15] = {0, 12, 14, 15, 5, 3, 0, 4, 1, 19, 14, 9, 3, 3, 1};
    int notas[7] = {500, 200, 100, 50, 20, 10, 5};
    int moedas[8] = {200, 100, 50, 20, 10, 5, 2, 1};
    int troco1, i, not, moed;
    float troco, troco2;

    troco = total - valor;
    troco1 = (int)troco;
    troco2 = (troco - troco1) * 100;

    if (valor < total) {
        printf("O cliente deu dinheiro insuficiente\n");
    } else if (valor == total) {
        printf("Não houve troco\n");
    } else {
        printf("O troco é:\n");

        for (i = 0; i < 7; i++) {
            not = troco1 / notas[i];
            if (not > 0) {
                if (not > caixa[i + 1]) {
                    printf("Notas insuficientes!\n");
                } else {
                    printf("A quantidade de notas de %d são %d \n", notas[i], not);
                    caixa[i + 1] -= not;
                }
            }
            troco1 = troco1 - (not * notas[i]);
        }

        for (i = 0; i < 8; i++) {
            moed = troco2 / moedas[i];
            if (moed > 0) {
                if (moed > caixa[i + 7]) {
                    printf("Moedas insuficientes!\n");
                } else {
                    printf("A quantidade de moedas de %d são %d  \n", moedas[i], moed);
                    caixa[i + 7] -= moed;
                }
            }
            troco2 = troco2 - (moed * moedas[i]);
        }
    }
    
    float valorcaixa=caixa[0]*500+caixa[1]*200+caixa[2]*100+caixa[3]*50+caixa[4]*20+caixa[5]*10+caixa[6]*5+caixa[7]*2+caixa[8]*1+caixa[9]*0.5+caixa[10]*0.2+caixa[11]*0.1+caixa[12]*0.05+caixa[13]*0.02+caixa[14]*0.01;
    float valorcaixafinal= valorcaixa+total;
    
}

int main() {
    float valor, total;

    printf("Introduza o valor recebido e o total a pagar: \n");
    scanf("%f %f", &valor, &total);

    trocolindo(valor, total);

    return 0;
}
