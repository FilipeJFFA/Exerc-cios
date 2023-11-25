#include <stdio.h>

int seraprimointerrogacao(int num1) {
    int i;

    if (num1 < 2) {
        printf("Numeros primos têm que ser maiores que 1\n");
        return 0;
    } else if (num1 == 2) {
        return 1;
    } else {
        for (i = 2; i * i <= num1; i++) {
            if (num1 % i == 0) {
                return 0;
            }
        }
        return 1;
    }
}

int seraparinterrogacao(int num1) {
   if (num1%2==0){
    return 0;
   }
   else{
    return 1;
   }
}

int main() {
    int num1;

    printf("Introduza o numero para verificar se o mesmo é primo: ");
    scanf("%d", &num1);

    printf("Primo ou nao primo: %d\n", seraprimointerrogacao(num1));
    printf("Par ou nao par: %d\n", seraparinterrogacao(num1));

    return 0;
}
