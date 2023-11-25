#include<stdio.h>

int ordena(int *y,int *z,int *x){
    if (*y<*z && *y<*x){
        printf("Valor mais pequeno: %d\n",*y);
        if (*x<*z){
            printf("Valor intermedio: %d\n",*x);
            printf("Maior valor: %d\n",*z);
        }
    
    }
    else if(*z<*y && *z<*x){
         printf("Valor mais pequeno: %d\n",*z);
        if (*x<*y){
            printf("Valor intermedio: %d\n",*x);
            printf("Maior valor: %d\n",*y);
        }
    }
    else{
        printf("Valor mais pequeno: %d\n",*x);
        if (*z<*y){
            printf("Valor intermedio: %d\n",*z);
            printf("Maior valor: %d\n",*y);
        }
    }
}



int main(){
int a, b, c;
printf("Introduza 3 numeros para ordenar: ");
scanf("%d %d %d",&a,&b,&c);
ordena(&a, &b, &c);
return 0;
}