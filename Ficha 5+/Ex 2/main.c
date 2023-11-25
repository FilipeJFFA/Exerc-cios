#include<stdio.h>

void calcularvetor(int vetor[],int tamanho){
    int i,num1;  
    int soma = 0;
    float media;
    if (tamanho<=0){
        printf("O vetor tem que ser maior que zero seu burr! \n");

    }
    else{
        for (i=1;i<tamanho;i++){
            printf("Introduza o numero deo vetor: ");
            scanf("%d",&num1);
            vetor[i]=num1;
            soma = soma + num1;
        }
        media= soma/tamanho;
        printf("Os valores do vetor acima da media são: \n");
        for (i=0;i<tamanho;i++){
            if(vetor[i]>media){
                printf("%d \n",vetor[i]);
            }
        }
    }
}


int main(){
    int tamanho;
    printf("Introduza o tamanho do vetor: \n");
    scanf("%d",&tamanho);

    int vetor[tamanho];

    calcularvetor(vetor,tamanho);


}