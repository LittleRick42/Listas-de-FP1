//Atividade de Linguagem C 03/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EX14
int eh_regular(int num);
int main(void)
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (eh_regular(num))
        printf("%d eh um numero regular.");

    else
        printf("%d não eh um numero regular.");

    printf("\n");

    return 0;
}

int eh_regular(int num)
{
    for (int i = 2; i <= num; i++)
        while (num % i == 0)
        {
            if (i > 5)
                return 0;

            num /= i;
        }


    return 1;
}
