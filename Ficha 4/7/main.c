#include<stdio.h>

float trocodocliente(float recebido,float total){
    if (recebido < 0|| total<0){
        printf("!!Erro!!");
        return 0;
    }
    else if (recebido<total){
        printf("!!Erro!!");
        return 0;
    }
    else {
        return recebido-total;
    }
}
int main(){
    float troco,recebido,total;
    printf("Introduza o dinheiro dado e o total da compra");
    scanf("%f %f",&recebido,&total);

    troco=trocodocliente(recebido,total);
    printf("O troco foi %f euros!\n",troco);
    return 0;
}