#include<stdio.h>

int main(){
    // definição das cartas
    int carta1 = 12300; // São Paulo
    int carta2 = 6000; // Rio de Janeiro

    //Comparação das cartas
    if(carta1 > carta2){
        printf("carta 1 venceu!\n");
    } else {
        printf("carta 2 venceu!\n");
    }
        return 0;
    }