#include<stdio.h>

int contaVogais (char *frase){
    int i;
    int count=0;
    for(i=0;i<strlen(frase);i++){
        if(frase[i]=='u' && frase[i]=='a' && frase[i]=='e' && frase[i]=='i' && frase[i]=='o' && frase[i]=='U' && frase[i]=='A' && frase[i]=='E' && frase[i]=='I' && frase[i]=='O'){
            count++;
        }
    }
    return count;

}

int main(){
    char frase[50];
    int num;
    printf("Introduza a frase a contar: ");
    gets(frase);

    num=contaVogais(frase);
    printf("O numero de vogais é ",num);
}