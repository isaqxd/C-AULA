#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
    int resultado = 0;
    int numero;
    char letra;

    srand(time(NULL));
    printf("\nDigite algo:\n");
    scanf("%c", letra);


    while (resultado<100){ 
        numero=(rand() % 21) + (-10);
        printf("\nO seu numero e %d\n", numero);

    if (numero == 0) {
        resultado = resultado+1000;
        printf("Voce ganhou 1000 pontos.\n");
    }
    if (numero >= -5 && numero <= 5){
        resultado = resultado + 10;
        printf("Voce ganhou 10 pontos.\n" );
    }
    else if ((numero >= -10) && (numero <= 10)){
        resultado = resultado - 10;
        printf("Voce perdeu 1 ponto.\n");
    }
    else {
        printf("Voce nao ganhou nada.\n");
    }

    printf("\nA sua pontuacao e %d\n", resultado);
}
    return 0;
}
