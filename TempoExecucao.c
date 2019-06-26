#include "TempoExecucao.h"

void IniciarContador()
{
    LARGE_INTEGER li;
    FrequenciaPC = (double)(li.QuadPart) / 1000.0;
    QueryPerformanceCounter(&li);
    InicioContador = li.QuadPart;
}
 
void ObterContador()
{
    LARGE_INTEGER li;
    QueryPerformanceCounter(&li);
    double tempoEmMs = 0.0000000;
    tempoEmMs = (double)(li.QuadPart - InicioContador) / FrequenciaPC;
    printf("\n\nTempo de Execucao = %.7lf milissegundos\n", tempoEmMs);
}