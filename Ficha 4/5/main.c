#include<stdio.h>

int numeroprimo(int num1){
    int i;
    if (num1<1){
        printf("O numero tem que ser supeior a 1");
        return 0;
    }
    else if (num1%2==0 && num1!=2){
        
        return 0;
    }
    else
        for (i=2;i<num1;i++){
            if (num1%i==0){
                return 0;
            }
        }
    return 1;
}
int main(){
    int num1,primo;
    printf("Introduz o numero: \n");
    scanf("%d",&num1);

    primo= numeroprimo(num1);
    printf("%d",primo);
    return 0;
}