#include<stdio.h>

void fazermatrizbonita(int m,int n){
    int i,z;
    int soma=0;
    int matriz[m][n];
    for(i=0;i<m;i++){
        for(z=0;z<n;z++){
            printf("Introduza o numero %d %d da matriz: ",i+1,z+1);
            scanf("%d",&matriz[i][z]);
            if(i==z){
                soma=soma+matriz[i][z];
            }
        }
    }
    
    printf("A soma da diagonal principal é %d ",soma);
}


int main() {
    int m, n;

    printf("Introduza a quantidade de linhas e de colunas da matriz: ");
    scanf("%d %d", &m, &n);

    fazermatrizbonita(m, n);

    return 0;
}
