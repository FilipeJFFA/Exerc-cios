#include<stdio.h>

int contaLetras(char *frase,char letra){
     int conta = 0;
     int i;
     for (i=0;i<strlen(frase);i++){
        if(frase[i]==letra){
            conta++;
        }
     }
    return conta;
}


int main(){
    char frase[50];
    char letra;
    int cont=0;
    printf("Introduza uma frase: ");
    gets(frase); 
    printf("Introduza a letra: ");
    scanf("%c",&letra);
    cont=contaLetras(frase,letra);
    printf("O numero de letras é: %d ",cont);
    return 0;

}