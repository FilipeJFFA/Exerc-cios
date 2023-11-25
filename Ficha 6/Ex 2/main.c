#include <stdio.h>
#include <string.h>

void trocaLetras(char *frase, char aSubstituir, char novaLetra) {
    int i;
    for (i = 0; i < strlen(frase); i++) {
        if (frase[i] == aSubstituir) {
            frase[i] = novaLetra;
        }
    }
}

int main() {
    char frase[50];
    char aSubstituir, novaLetra;

    printf("Introduza a frase a ler: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Introduza a letra a substituir: ");
    scanf(" %c", &aSubstituir);

    printf("Introduza a letra que vai substituir: ");
    scanf(" %c", &novaLetra);

    trocaLetras(frase, aSubstituir, novaLetra);

    printf("Frase modificada: %s", frase);

    return 0;
}
