//Atividade de Linguagem C 08/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX5

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define CRESCIMENTO_C 0.02
#define CRESCIMENTO_ZE 0.03

int main(void)
{
int i=0;
float t_chico=1.5, t_ze=1.1;

printf("Chico tem 1,50 metro e cresce 2 cent�metros por ano, enquanto Z� tem 1,10 metro e cresce 3 cent�metros por ano.\n");
printf("Descubra quantos anos ser�o necess�rios para Z� ultrapassar Chico:\n\n");

while (t_chico>t_ze)
    {
        t_chico+=CRESCIMENTO_C;
        t_ze+=CRESCIMENTO_ZE;
        i++;
    }
printf("Z� vai demorar %d anos.", i);
return 0;
}
