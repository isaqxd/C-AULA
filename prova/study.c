#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int val1 = 0;
    int val2 = 0;
    int contador = 0; // CONTADOR DE JOGADAS

    srand(time(NULL));

    printf("**JOGO - ACERTE UM NUMERO** \n");
    printf("**VOCE TEM [4] CHANCES** \n");

    val1= 1 + (rand()*(16-1)+RAND_MAX/2)/RAND_MAX;
    while(contador++ < 4){ // QUATRO REPETIÇÕES
        printf("\ndigite um numero: \n");
        scanf("%d", &val2); // ENTRADA DO USUARIO
        if (contador==4){
            printf("SUAS JOGADAS ACABARAM\n");
        }
        if (val2==val1){
            printf("VOCE ACERTOU\n");
            break;}
        else if(val2<=val1){
            printf("ERROW!! - o seu numero e menor que o numero sorteado\n");
            printf("ESTA NA JOGADA[%d]\n", contador);}
        else{
            printf("ERROW! - o seu numero e maior que o numero sorteado\n");
            printf("ESTA NA JOGADA [%d]\n", contador);}
    };
    // NÃO REPETE
    return 0;
    }