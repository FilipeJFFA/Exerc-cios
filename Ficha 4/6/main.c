#include<stdio.h>

int mesdoano(int mes){
    if (mes<1 || mes > 12){
        printf("O numero tem que ser entre 1 e 12 ! ERRO !! \n");
        return 0;
    }
    else{
        char *nomes[] = {
        "Janeiro","Febereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"
        };
        printf("O mes %d é %s.\n", mes, nomes[mes - 1]);
    }
}
int main(){
    int mes;
    printf("Introduza o numero de (1 a 12) que indique o mes em questão: \n");
    scanf("%d",&mes);
    mesdoano(mes);
    return 0;
}