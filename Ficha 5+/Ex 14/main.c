#include <stdio.h>

int fazermatrizbonita(int m, int n) {
    int matriz[m][n];

    
    for (int i = 0; i < m; i++) {
        for (int z = 0; z < n; z++) {
            printf("Introduza o valor da matriz para a posição %d %d: ", i + 1, z + 1);
            scanf("%d", &matriz[i][z]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int z = 0; z < n; z++) {
            if (matriz[i][z] != matriz[z][i]) {
                return 0;
            }
            else{
                return 1;
            }
        }
    }
}

int main() {
    int m, n,sera;

    printf("Introduza a quantidade de linhas e de colunas da matriz: ");
    scanf("%d %d", &m, &n);

    sera = fazermatrizbonita(m, n);
    if (sera==0){
        printf("A matriz nao é invertivel|");
    }
    else{
        printf("A matriz é invertivel|");
    }
    return 0;
}
