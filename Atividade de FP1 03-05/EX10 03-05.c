//Atividade de Linguagem C 03/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EX10
int retorna_MDC(int num1, int num2);

int main(void)
{
    int n1, n2, mdc;

    printf("Insira dois numeros separados por espacos: ");
    scanf("%d %d", &n1, &n2);

    mdc = retorna_MDC(n1, n2);
    printf("O MDC de %d e %d é %d\n", n1, n2, mdc);

    return 0;
}

int retorna_MDC(int num1, int num2)
{
    // utilizando recursao, acha o MDC. subtrai do maior numero o menor numero,
    // ate que os dois sejam iguais

    if (num1 == num2)
        return num1;

    if (num1 > num2)
        num1 -= num2;

    else
        num2 -= num1;

    return retorna_MDC(num1, num2);
}
