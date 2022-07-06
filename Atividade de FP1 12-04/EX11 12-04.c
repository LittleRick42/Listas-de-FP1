//Atividade de Linguagem C 12/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX11

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
int n, k, primo, achados = 0;

printf("Digite a quantidade de n�meros primos a serem representados: ");
    scanf("%d", &n);

printf("Digite a qual n�mero deve-se come�ar a contagem: ");
    scanf("%d", &k);

    if (k <= 0 || n <= 0)
    {
        printf("O n�mero precisa ser maior que 0.\n");
        return 0;
    }

    for (int i = k; achados < n; i++)
    {
        primo = 1;
        for (int j = i - 1; j > 1; j--)
        {
            if (i % j == 0)
            {
                primo = 0;
                break;
            }
        }
        if (primo && i != 1)
        {
            achados++;
            printf("%d - %d\n", achados, i);
        }
    }
    return 0;
}
