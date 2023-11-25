#include <stdio.h>

void fazermatrizbonita(int m, int n, int a, int b) {
    if (a != m || b != n) {
        printf("Impossivel! As matrizes devem ter o mesmo numero de linhas e colunas\n");
        return;
    }

    int matriz1[m][n];
    int matriz2[a][b];
    int soma[m][n];


    printf("Preencha a primeira matriz:\n");
    for (int i = 0; i < m; i++) {
        for (int z = 0; z < n; z++) {
            printf("Introduza o numero %d %d da matriz: ", i + 1, z + 1);
            scanf("%d", &matriz1[i][z]);
        }
    }

    printf("Preencha a segunda matriz:\n");
    for (int i = 0; i < a; i++) {
        for (int y = 0; y < b; y++) {
            printf("Introduza o numero %d %d da matriz: ", i + 1, y + 1);
            scanf("%d", &matriz2[i][y]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int z = 0; z < n; z++) {
            soma[i][z] = matriz1[i][z] + matriz2[i][z];
        }
    }

    printf("A soma das matrizes é:\n");
    for (int i = 0; i < m; i++) {
        for (int z = 0; z < n; z++) {
            printf("%d ", soma[i][z]);
        }
        printf("\n");
    }
}

int main() {
    int m, n, a, b;

    printf("Introduza a quantidade de linhas e de colunas da matriz: ");
    scanf("%d %d", &m, &n);
    printf("Introduza a quantidade de linhas e de colunas da segunda matriz: ");
    scanf("%d %d", &a, &b);

    fazermatrizbonita(m, n, a, b);

    return 0;
}
