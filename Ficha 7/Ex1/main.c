#include <stdio.h>
#include <string.h>

struct Usuario {
    char nome[50];
    char morada[100];
    int telefone;
};

void inserirAssinante(struct Usuario *lista, struct Usuario novoAssinante) {
}

int main() {
    struct Usuario lista[100];
    struct Usuario novoAssinante;
    int escolha, i;

    do {
        printf("\nMenu:\n");
        printf("1. Inserir assinante\n");
        printf("2. Editar assinante\n");
        printf("3. Consultar assinante por nome\n");
        printf("4. Remover assinante\n");
        printf("5. Listar assinantes\n");
        printf("6. Número de assinantes\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1: {
                printf("Nome: ");
                scanf("%s", novoAssinante.nome);
                printf("Morada: ");
                scanf("%s", novoAssinante.morada);
                printf("Número: ");
                scanf("%d", &novoAssinante.telefone);
                inserirAssinante(lista, novoAssinante);
                printf("Assinante inserido com sucesso!\n");
                break;
            }
            case 2: {
                int numeroEditar;
                 printf("Digite o número do assinante a ser editado: ");
                 scanf("%d", &numeroEditar);
                 for (i = 0; i < 100; i++) {
                        printf("Nome: ");
                        scanf("%s", lista[i].nome);
                        printf("Morada: ");
                        scanf("%s", lista[i].morada);
                        printf("Número: ");
                        scanf("%d", &lista[i].telefone);
                        printf("Assinante atualizado com sucesso!\n");
                        break;
                 }
            break;
            }
            case 3: {
                char nomeConsulta[50];
                printf("Digite o nome do assinante a ser consultado: ");
                scanf("%s", nomeConsulta);
                for (i = 0; i < 100; i++) {
                        printf("Nome: %s\n", lista[i].nome);
                        printf("Morada: %s\n", lista[i].morada);
                        printf("Número: %d\n", lista[i].telefone);
                        break;
                }
                break;
            }
            case 4: {
                int numeroRemover;
                printf("Digite o número do assinante a ser removido: ");
                scanf("%d", &numeroRemover);
                for (i = 0; i < 100; i++) {
                    if (lista[i].telefone == numeroRemover) {
                        lista[i].nome[0] = '\0';
                        lista[i].morada[0] = '\0';
                        lista[i].telefone = 0;
                        printf("Assinante removido com sucesso!\n");
                        break;
                    }
                }
                break;
            }
            case 5: {
                printf("Lista de assinantes:\n");
                for (i = 0; i < 100; i++) {
                        printf("%s\n", lista[i].nome);
                        break;
                }
                break;
            }
            case 6: {
                int numAssinantes = 0;
                for (i = 0; i < 100; i++) {
                    if (lista[i].nome[0] != '\0') {
                        numAssinantes++;
                    }
                }
                printf("Número de assinantes: %d\n", numAssinantes);
                break;
            }
            default:
                printf("Escolha inválida. Tente novamente.\n");
        }
    } while (escolha != 0);

    return 0;
}
