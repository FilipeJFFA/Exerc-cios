#include<stdio.h>

int tempoParaSegundos(int horas, int minutos, int segundos){
    if (minutos<0 || horas<0 || segundos<0 ){
        return 0;
    }
    else{

        return horas*3600 + minutos*60 + segundos;

    }

}
int main(){
    int horas,minutos,segundos;
    printf("Introduza as horas os minutos e os segundos: \n");
    scanf("%d %d %d",&horas,&minutos,&segundos);

    segundos= tempoParaSegundos(horas,minutos,segundos);
    printf("O valor em segundos é %d",segundos);
    return 0;
}
