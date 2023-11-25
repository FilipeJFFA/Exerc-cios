#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Digite o valor para x: ");
    scanf("%d", &x);

    printf("Digite o valor para y: ");
    scanf("%d", &y);

    printf("Valores originais: x = %d, y = %d\n", x, y);

    troca(&x, &y);

    printf("Valores trocados: x = %d, y = %d\n", x, y);

    return 0;
}

