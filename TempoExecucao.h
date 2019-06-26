/* 
    TempoExecucao é uma biblioteca para retornar o tempo de execução de uma
    função. 
*/
#include <windows.h>
#include <stdio.h>
#ifndef TEMPOEXECUCAO_H
#define TEMPOEXECUCAO_H

double FrequenciaPC = 0.0;
__int64 InicioContador = 0;



/*  
    A função IniciarContador() é responsável por iniciar a contagem
 */

void IniciarContador();

/*  
    A função ObterContador() é responsável por obter o fim da contagem e
    mostrar na tela
 */

void ObterContador();

#endif /* TEMPOEXECUCAO_H */