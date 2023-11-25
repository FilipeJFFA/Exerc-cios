#include<stdio.h>

int main(){

    float num1,maior,menor;
    menor=999999999999;
    maior=0;
    do {
        printf("Introduza o numero:");
        scanf("%f",&num1);
      if (num1!=0){  
        if (num1>maior){
            maior=num1;
        }
        if(num1<menor){
            menor=num1;
        }
      }
    } while (num1!=0);
     printf("O maior numero e o %f e o menor e o %f",maior,menor);
     return 0;
}