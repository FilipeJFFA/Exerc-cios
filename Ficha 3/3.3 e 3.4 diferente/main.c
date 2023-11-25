#include<stdio.h>
#include <float.h>

int main(){

    float num1,maior,menor;
    maior=0;
    menor=999999999999999;
    while (num1!=0){
        printf("Introduza o numero:");
        scanf("%f",&num1);
        if (num1>maior){
            maior=num1;
        }
        if(num1<menor && num1!=0){
            menor=num1;
        }
    }
     printf("O maior numero e o %f e o menor e o %f",maior,menor);
     return 0;
}