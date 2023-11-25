#include<stdio.h>

int main(){
    int num1,num2,i;
    printf("Introduza o primeiro e o segundo numero:\n");
    scanf("%d %d",&num1,&num2);
    if (num1==num2){
         printf("Nao ha numeros entre numeros iguais dahhhh");
    }
    else if ( num1<num2){
        for (i=num1+1;i<num2;i++){
            printf("%d \n",i);
        }
    }
    else{
        for (i=num2+1;i<num1;i++){
            printf("%d \n",i);
        }
    }
    return 0;
}