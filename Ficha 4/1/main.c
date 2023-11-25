#include<stdio.h>

int horasParaMinutos(int horas){
    if (horas<0){
        return 0;
    }
    else{
        return horas*60;
    }
} 
int main(){
    int horas,minutos;
    printf("Introduza as horas: \n");
    scanf("%d",&horas);

    minutos=horasParaMinutos(horas);
    
    printf("%d horas sao %d minutos",horas,minutos);
    return 0;
}