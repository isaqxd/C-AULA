#include <stdio.h>
int main(){

    int val1 = 100;
    int val2 = 200;
    int chute;

    printf("chute um numero:");
  

    for (;;){
    scanf("%i", &chute);
    if((chute >= val1) && (chute <= val2)){
        printf("\n voce acertou!");
        break;
    }
    else{
        printf("\n voce errou!");
    }
    }   
    return 0;
}