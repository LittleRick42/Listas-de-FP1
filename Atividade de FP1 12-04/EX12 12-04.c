//Atividade de Linguagem C 12/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX12

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
int n1, n2, max, min, mmc = 1;

    printf("Digite dois números para calcular o MMC: ");
    scanf("%d %d", &n1, &n2);

    if (n1<=0 || n2<=0)
    {
        printf("Algum desses números não pode ser usado para o MMC.");
        return 0;
    }

    else if (n1 == n2)
        mmc = n1;

    else
    {
        max = (n1 + n2 + abs(n1 - n2)) / 2,
        min = (n1 + n2 - abs(n1 - n2)) / 2;

        for (int divisor = 2; divisor <= const_max && (max > 1 || min > 1); divisor++)
        {
            while (max % divisor == 0 || min % divisor == 0)
            {
				printf("%d, %d | %d\n", max, min, divisor);
                if (max % divisor == 0)
                    max /= divisor;

                if (min % divisor == 0)
                    min /= divisor;

                mmc *= divisor;
            }
        }
    }
	printf("1 1 | 1\n");
    printf("O MMC equivale a: %d ", mmc);
    return 0;
}
