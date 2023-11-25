#include<stdio.h>

float grausfortnite(float cel){
    
    return (cel*9/5)+32;
}

int main(){
    float cel,fortnite;
    printf("Introduza os graus em celius: \n");
    scanf("%f",&cel);
    
    fortnite=grausfortnite(cel);
    printf("%f graus celius sao %f graus fortnite",cel,fortnite);
    return 0;

}