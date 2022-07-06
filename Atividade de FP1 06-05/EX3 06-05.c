//Atividade de Linguagem C 06/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EX3
void converteHora(int total_segundos, int *hora, int *min, int *seg);
int main(void)
{
    int segundos=-1, tempo_conv;
    int tempo_hr, tempo_min, tempo_segs;
    while (segundos<0)
    {
    printf("Digite um número de segundos: ");
        scanf("%d", &segundos);
    }
    converteHora(segundos, &tempo_hr, &tempo_min, &tempo_segs);
    printf("%d segundos = %dhrs %dmin %ds", segundos, tempo_hr, tempo_min, tempo_segs);
    return 0;
}

void converteHora(int total_segundos, int *hora, int *min, int *seg)
{
    *hora= total_segundos/3600;
    *min= (total_segundos%3600)/60;
    *seg= (total_segundos%3600)%60;
    return;
}
