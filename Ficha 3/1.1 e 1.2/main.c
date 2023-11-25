
#include<stdio.h>

int main(){
    int num1,num2;
    float resultado;
    char simb;
    printf("Introduza os numeros:\n");
    scanf("%d %d",&num1, &num2);
    printf("Introduza o simbolo da conta que quer fazer sabendo que os simbolos disponiveis são: *,/,-,+");
    scanf(" %c",&simb);
    switch (simb){
        case '-':
        resultado=num1-num2;
        printf("O resultado e %f",resultado);
        break;
        case '+':
        resultado=num1+num2;
        printf("O resultado e %f",resultado);
        break;
        case '*':
        resultado=num1*num2;
        printf("O resultado e %f",resultado);
        break;
        case '/':
            if (num2!=0){
                resultado=num1/num2;
                printf("O resultado e %f",resultado);
            }
            else{
                printf("Erro Matematico!!!!");
            }
        break;
    }
    return 0;
}