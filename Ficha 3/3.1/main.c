#include<stdio.h>

int main(){
   
    float num1,num2,num3;
    printf("Insira os 3 numeros para depois o codigo mostrar qual deles e o menor: \n");
    scanf("%f %f %f", &num1,&num2,&num3);
    if (num1==num2 || num2==num3 || num3==num1){
        printf("Os numeros tenhem que ser todos diferentes!");
    }
    else{
        if (num1<num2 && num1<num3){
            printf("O menor numero e o numero %f",num1);
        }
        else if(num2<num3 && num2<num1){
            printf("O menor numero é o %f",num2);
        }
        else {
            printf("O menor numero é o %f",num3);
        }
    }   
    return 0;
}