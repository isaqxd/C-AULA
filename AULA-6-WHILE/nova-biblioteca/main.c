#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
    int aleatorio;
    int valmin= -10;
    int valmax= 10;

    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        aleatorio = rand();
        aleatorio = valmin + aleatorio*(valmax - valmin)  + RAND_MAX/2;
        printf("\n %d", aleatorio);
    }

}