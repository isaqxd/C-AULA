#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define V (1000)
#define TAMANHO_VETOR (10)
int main()
{

    int vector[V];
    int aux;

    srand(time(NULL));

    for (int i = 0; i < V; i++)
    {
        vector[i] = 1 + rand() % 1100;
    }

    for (int i = 0; i < (V - 1); i++)
    {
        if (vector[i] > vector[i + 1])
        {
            aux = vector[i];
            vector[i] = vector[i + 1];
            vector[i + 1] = aux;

            i = -1;
        }
    }

    for (int i = 0; i < V; i++)
    {
        // printf("%d ", vector[i]);
    }

    int sequential_search(int tamanho[TAMANHO_VETOR], int item)
    {
        for (int i = 0; t < TAMANHO_VETOR; i++)
        {
            if (tamanho[i] == item)
            {
                return i;
            }
        }

        return -1;
    }
}