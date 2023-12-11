#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostraFicheiro(char *nome) {
    FILE *arquivo = fopen(nome, "r");

    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }

    char linha[1000];
    char linhaMaisLonga[1000] = "";
    int tamanho1 = 0;
    int tamanho2;
    tamanho2=strlen(linha);

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {

        if (tamanho2 > tamanho1) {
            tamanho1 = tamanho2;
            printf("%s",linha);
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
