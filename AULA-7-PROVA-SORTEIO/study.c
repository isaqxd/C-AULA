#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int val1;
    int val2;
    int contador = 0; // CONTADOR DE JOGADAS

    srand(time(NULL));

    printf("**JOGO - ACERTE O NUMERO** \n");
    printf("**VOCE TEM [4] CHANCES** \n");

    val1= 1 + (rand()*(16-1)+RAND_MAX/2)/RAND_MAX;
    
    while(contador++ < 4){ // QUATRO REPETIÇÕES
        printf("\ndigite um numero: \n");
        scanf("%d", &val2); // ENTRADA DO USUARIO
        if (val2==val1){
            printf("VOCE ACERTOU\n");
            break;}

        else if(val2<=val1){
            printf("ERROW!! - O seu numero e menor que o numero sorteado\n");
            printf("ESTA NA JOGADA[%d]\n", contador);}

        else{
            printf("ERROW! - O seu numero e maior que o numero sorteado\n");
            printf("ESTA NA JOGADA [%d]\n", contador);}
        
        if (contador==4){
            printf("SUAS JOGADAS ACABARAM\n");} 
    };
    // NÃO REPETE
    return 0;
}