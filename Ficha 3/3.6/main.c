#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int N,random,num1,seila,seila2,contador;
    contador=0;
    printf("!!WARNING!! \n");
    printf("Nas dicas quando diz quente ou frio, quente é a menos de 20 numeros, e frio a mais de 20 numeros de ditancia!");
    printf("Intoduza o numero N que vai definir o numero que entre 0 e esse numero ira ser um numero aleatorio e tu vais ter que escolher: \n");
    scanf("%d",&N);
    srand(time(NULL));
    random=rand()%(N+1);
    while(random!=num1){
        printf("Tenta adivinhar o numero:\n");
        scanf("%d",&num1);
        if (num1>N || num1<0){
            printf("Os numeros so podem ser entre 0 e %d",N);
        }      
        else{
        if (random==num1){
            printf("Ate que enfim que acertaste, tava a ver que nunca mais... e em %d tentativas!",contador);
            break;
        }
        seila= random-num1;
        seila2= abs(seila);
        if (seila2>20){
            if (num1<random){
                printf("Estas frio ainda, tenta um numero maior\n");
            }
            else{
                printf("Estas frio ainda, tenta um numero menor\n");

            }
        }
        else{
            if (num1<random){
                printf("Estas quente, porem tenta um numero maior\n");
            }
            else{
                printf("Estas quente, porem tenta um numero menor\n");
            }
        }
    contador=contador+1;
    }
  }
    return 0;

}