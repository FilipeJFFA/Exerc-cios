#include<stdio.h>

int contaPalavras (char *frase){
    int i;
    int contador=1;
    for (i=0;i<strlen(frase);i++){
        if(frase[i]== ' '){
        contador++;
    }
    }
    return contador;
}

int main(){
    char frase[50];
    int count;
    printf("Introduz a frase: ");
    
    gets(frase);

    count=contaPalavras(frase);
    
    printf("O numero de palavras é: %d",count);


}