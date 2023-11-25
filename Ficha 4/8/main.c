#include <stdio.h>

int calcularTroco(float recebido, float total) {
    if (recebido < 0 || total < 0 || recebido < total) {
        printf("!!Erro!!");
        return 0;
    }

    float troco = recebido - total;
    printf("O troco foi %.2f euros!\n", troco);

    printf("Notas:\n");

    int quantidadeNotas;

    quantidadeNotas = troco / 50;
    if (quantidadeNotas > 0) {
        printf("%d nota(s) de 50 euros\n", quantidadeNotas);
        troco -= quantidadeNotas * 50;
    }

    quantidadeNotas = troco / 20;
    if (quantidadeNotas > 0) {
        printf("%d nota(s) de 20 euros\n", quantidadeNotas);
        troco -= quantidadeNotas * 20;
    }

    quantidadeNotas = troco / 10;
    if (quantidadeNotas > 0) {
        printf("%d nota(s) de 10 euros\n", quantidadeNotas);
        troco -= quantidadeNotas * 10;
    }

    quantidadeNotas = troco / 5;
    if (quantidadeNotas > 0) {
        printf("%d nota(s) de 5 euros\n", quantidadeNotas);
        troco -= quantidadeNotas * 5;
    }

    

    printf("Moedas:\n");

    int quantidadeMoedas;
    quantidadeMoedas = troco / 2;
    if (quantidadeNotas > 0) {
        printf("%d moedas(s) de 2 euros\n", quantidadeNotas);
        troco -= quantidadeNotas * 2;
    }

    quantidadeMoedas = troco / 1;
    if (quantidadeMoedas > 0) {
        printf("%d moeda(s) de 1 euro\n", quantidadeMoedas);
        troco -= quantidadeMoedas * 1;
    }

    quantidadeMoedas = troco / 0.5;
    if (quantidadeMoedas > 0) {
        printf("%d moeda(s) de 50 cêntimos\n", quantidadeMoedas);
        troco -= quantidadeMoedas * 0.5;
    }

    quantidadeMoedas = troco / 0.2;
    if (quantidadeMoedas > 0) {
        printf("%d moeda(s) de 20 cêntimos\n", quantidadeMoedas);
        troco -= quantidadeMoedas * 0.2;
    }

    quantidadeMoedas = troco / 0.1;
    if (quantidadeMoedas > 0) {
        printf("%d moeda(s) de 10 cêntimos\n", quantidadeMoedas);
        troco -= quantidadeMoedas * 0.1;
    }

    quantidadeMoedas = troco / 0.05;
    if (quantidadeMoedas > 0) {
        printf("%d moeda(s) de 5 cêntimos\n", quantidadeMoedas);
        troco -= quantidadeMoedas * 0.05;
    }

    quantidadeMoedas = troco / 0.02;
    if (quantidadeMoedas > 0) {
        printf("%d moeda(s) de 2 cêntimos\n", quantidadeMoedas);
        troco -= quantidadeMoedas * 0.02;
    }

    quantidadeMoedas = troco / 0.01;
    if (quantidadeMoedas > 0) {
        printf("%d moeda(s) de 1 cêntimo\n", quantidadeMoedas);
        troco -= quantidadeMoedas * 0.01;
    }
}

int main() {
    float recebido, total;
    printf("Introduza o dinheiro dado e o total da compra: ");
    scanf("%f %f", &recebido, &total);

    calcularTroco(recebido, total);

    return 0;
}
