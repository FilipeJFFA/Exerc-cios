#include <stdio.h>
#include <string.h>

void inverteTexto(char *frase) {
    int i;
    int m = strlen(frase) - 1;

    char temp;
    for (i = 0; i < m / 2; i++) {
        temp = frase[i];
        frase[i] = frase[m - i];
        frase[m - i] = temp;
    }

    printf("A frase invertida é: %s\n", frase); 
}

int main() {
    char frase[50];

    printf("Introduz a frase: ");
    fgets(frase, sizeof(frase), stdin);

    int len = strlen(frase);
    if (len > 0 && frase[len - 1] == '\n') {
        frase[len - 1] = '\0';
    }

    inverteTexto(frase);

    return 0;
}
