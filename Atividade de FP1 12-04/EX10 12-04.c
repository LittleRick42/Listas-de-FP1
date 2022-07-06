//Atividade de Linguagem C 12/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
 int mmc, resto, numero = 0;

for (int i = 20; !numero; i++)
    {
        resto = 0;
        for (int j = 1; j <= 20; j++)
        {
            if (i % j != 0)
            {
                resto = 1;
                break;
            }
        }
        if (!resto)
        {
            numero = 1;
            mmc = i;
        }
    }
    printf("O MMC de 1 a 20 é %d\n", mmc);
    return 0;
}
