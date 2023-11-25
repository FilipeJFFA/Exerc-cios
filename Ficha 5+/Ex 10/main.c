#include<stdio.h>

void ordemvetor(int vetor[], int tamanho) {
    int i,cu;


    for (i = 0; i < tamanho - 1; i++) {

            if (vetor[i] < vetor[i + 1]) {
                cu = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = cu;
            }
        }
    }

int main() {
    int tamanho, i, nota;

    printf("Introduza quantos alunos tem a turma: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for (i = 0; i < tamanho; i++) {
        printf("Introduza a %dª nota: \n", i + 1);
        scanf("%d", &nota);
        vetor[i] = nota;
    }

    ordemvetor(vetor, tamanho);

    printf("Vetor ordenado em ordem decrescente: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
