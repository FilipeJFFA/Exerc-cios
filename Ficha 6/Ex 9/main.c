#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void mostraFicheiro(const char *nome) {
    FILE *arquivo = fopen(nome, "r");

    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }

    char linha[1000];
    char linhaMaisLonga[1000] = "";
    int numLinhas = 0;
    int numVogais = 0;
    int numPalavras = 0;
    int maiorDimensao = 0;

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
      
        numLinhas++;

        for (int i = 0; linha[i] != '\0'; i++) {
            if (isalpha(linha[i])) {
                
                char caractere = tolower(linha[i]);
                if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
                    numVogais++;
                }
            }

            if (isspace(linha[i])) {
                numPalavras++;
            }
        }

        int dimensaoLinha = strlen(linha);
        if (dimensaoLinha > maiorDimensao) {
            maiorDimensao = dimensaoLinha;
            strcpy(linhaMaisLonga, linha);
        }
    }

    fclose(arquivo);

   
    if (numLinhas > 0) {
        numPalavras++;
    }

    printf("Número de linhas: %d\n", numLinhas);
    printf("Número de vogais: %d\n", numVogais);
    printf("Número de palavras: %d\n", numPalavras);
    printf("Dimensão da linha com mais texto: %d\n", maiorDimensao);
    printf("Linha mais longa:\n%s", linhaMaisLonga);
}

int main() {
    char nome[50];
    printf("Introduza o nome do arquivo: ");
    fgets(nome, sizeof(nome), stdin);
    
    mostraFicheiro(nome);

    return 0;
}
