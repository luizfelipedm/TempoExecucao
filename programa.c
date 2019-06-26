#include "TempoExecucao.c"
#include <time.h>

void bubble_sort(int vetor[], int n)
    {
        int k, j, aux;  

        for (k = 1; k < n; k++) {
            printf("\n[%d] ", k);

            for (j = 0; j < n - 1; j++) {
                printf("%d, ", j);

                if (vetor[j] > vetor[j + 1]) {
                    aux = vetor[j];
                    vetor[j]     = vetor[j + 1];
                    vetor[j + 1] = aux;
                }
            }
        }
    }


int main()
{
    float tempo;
    time_t tini,tfim;
    int vetor[10] = {1,10,9,7,6,2,3,8,5,4};
    tini = time(NULL);
    IniciarContador();

    bubble_sort(vetor,10);

    
    ObterContador();
    tfim = time(NULL);

    tempo = difftime(tfim,tini);
    printf("tempo: %f",tempo);
}