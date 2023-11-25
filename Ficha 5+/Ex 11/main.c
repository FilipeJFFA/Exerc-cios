#include <stdio.h>

void fazermatrizbonita(int m, int n) {
    int matriz[20][20]; 

    for (int i = 0; i < m; i++) {
        for (int z = 0; z < n; z++) {
            printf("Introduza o valor da matriz para a posição %d %d: ", i + 1, z + 1);
            scanf("%d", &matriz[i][z]); 
        }
    }

    printf("A sua matriz é:\n");
    for (int i = 0; i < m; i++) {
        for (int z = 0; z < n; z++) {
            printf("%d ", matriz[i][z]); 
    }
       printf("\n");
}
}

int main() {
    int m, n;

    printf("Introduza a quantidade de linhas e de colunas da matriz: ");
    scanf("%d %d", &m, &n);

    fazermatrizbonita(m, n);

    return 0;
}
