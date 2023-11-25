#include<stdio.h>
#include <limits.h>

void vetorlindo(int vetor[],int tamanho){
    int i,numero;
    int menor=INT_MAX;
    if (tamanho<=0){

    printf("O tamanho tem que ser superior a 0 \n");
    }
    else{   
        printf("O vetor é: \n ");
        for (i=1;i<tamanho;i++){
            printf("Introduza o numero do vetor: \n");
            scanf("%d", &numero);
            vetor[i]=numero;
            printf("%d \n",numero);
            if (numero<menor){
                menor=numero;
            }

        }
        printf("E o menor numero é o %d: ", menor);
    }
}


int main(){
    int tamanho;
    printf("Introduza o tamanho do vetor: ");
    scanf("%d",&tamanho);
    int vetor[tamanho];

    vetorlindo(vetor,tamanho);
    return 0;
}

