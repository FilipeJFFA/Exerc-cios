#include <stdio.h>
#include <string.h>

void arqsla(char *nome) {
    FILE *arquivo = fopen(nome, "r");
  
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }

    char caractere;
    while ((caractere = fgetc(arquivo)) != EOF) {
        putchar(caractere);
    }

    fclose(arquivo);
}

int main() {
    char nome[100];
    printf("Introduza o nome do arquivo: ");
    gets(nome);

    arqsla(nome);

    return 0;
}
