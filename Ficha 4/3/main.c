#include<stdio.h>

int diasPorMes(int mes){
    if (mes<1 || mes>12){
        printf("!!ERRO!!");
        return 0;
    }
    else if (mes== 2){
        return 28;
    }
    else if (mes%2==0){
        return 30;
    }
    else{
        return 31;
    }

 }
int main(){
    int mes,dia;
    printf("Introduza o numero que corresponde ao mes (1 a 12): \n");
    scanf("%d",&mes);

    dia=diasPorMes(mes);

    printf("Esse mes tem %d dias",dia);
    return 0;
 }
