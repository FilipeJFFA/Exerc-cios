#include<stdio.h>

int main(){
    float nota1,nota2,nota3,media;
    printf("Introduza as suas notas de portugues, matematica e informatica:\n");
    scanf("%f %f %f",&nota1,&nota2,&nota3);
    if (nota1>0 && nota2>0 && nota3>0){
        media = (nota1+nota2+nota3)/3;
        if (media>=9.5)
        {
          printf("Aprovado!");
        }
        else{
            printf("Tenta pro ano filho");
        }
    }
    else{
        printf("notas nao podem ser negativas!");
    }
}
