#include <stdio.h>
int main(){

    int val1 = 100;
    int val2 = 200;
    int chute;

    printf("chute um numero:");  
    scanf("%i", &chute);
    int resultado = funcao(val1, val2, chute);
    if (resultado == 1) printf("Acerto a miseravi");
        
    else printf("errow");

    return 0;
}

int funcao(int val1, int val2, int chute) {
    return((chute >= val1) && (chute <= val2));
}