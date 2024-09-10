#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int alvo = 10;
    int palpite;
    int i;


do{
    printf("\nFaca seu palpite\n");
    scanf("%d", &palpite);

    if (palpite == alvo) {
    printf("\nAcertou!");
    printf("\nParabens! ");
        
    } else if (palpite > alvo) {
        printf("\nErrou =/");
        printf("\nTente um numero menor ");
    } else {
        printf("\nErrou =/");
        printf("\nTente um numero maior ");
    }
    i++;
}while ((palpite != alvo) || (i > 4));





    printf("\n Tecle qualquer coisa para terminar.");
    scanf("%d", palpite);

    // NÃO REPETE
    return 0;
}
