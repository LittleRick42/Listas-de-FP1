//Atividade de Linguagem C 12/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX9

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
int t, num, primo, soma = 0;

printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        primo = 1;
        printf("Digite o numero: ");
            scanf("%d", &num);

        for (int j = num-1; j > 1; j--)
        {
            if (num % j == 0)
            {
                primo = 0;
                break;
            }
        }

        if (primo)
        {
            soma += num;
        }
    }
    printf("Soma dos primos fornecidos: %d\n", soma);
    return 0;
}
