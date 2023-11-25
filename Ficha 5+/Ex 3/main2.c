void totoloto(){
    int vetor[6];
    int i,j,bola;
    srand(time(0));
    for(i=0;i<6;i++){
        do{

            bola =rand()%49;
            
            }
        }while(vetor[j]== bola);
       
         printf("Os 6 numeros do totoloto são %d %d %d %d %d %d ",vetor[0],vetor[1],vetor[2],vetor[3],vetor[4],vetor[5]);
    }
    


int main(){
    char letra;
    printf("Introduza a letra S para começar o programa: ");
    scanf("%c",&letra);
    if (letra== 's'|| 'S'){
        totoloto();
    }
    else{
        printf("Ok eu nao irei começar o programa :) ");
    }
}