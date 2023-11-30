#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void mostraFicheiro(char nome) {
    FILE *arquivo = fopen(nome  , "r");

    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }

    char linha[1000];  
    char linhaMaisLonga[1000] = "";  
    int tamanho1 = 0;
    int tamanho2= strlen(linha);
    int i;

    for (int i = 0; i < strlen(linha); i++) {

        if (tamanho2 > tamanho1) {
            tamanho2 = tamanho1;
            printf("%s", linha);
        }
    }

    fclose(arquivo);

    printf("Linha mais longa:\n%s", linhaMaisLonga);
}

int main() {
    char nome[50];
    printf("Introduza o nome do arquivo: ");
    gets(nome);
    

    mostraFicheiro(nome);

    return 0;
}
