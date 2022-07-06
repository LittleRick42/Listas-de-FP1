//Atividade de Linguagem C 03/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EX11
//b)
int conta_digitos(int n, int d);
int eh_permutacao(int n1, int n2);

int main(void)
{
    int n1, n2;

    printf("Digite dois números naturais: ");
    scanf("%d %d", &n1, &n2);

    printf("%d e %d ", n1, n2);
    if (eh_permutacao(n1, n2))
        printf("são ");

    else
        printf("não são ");

    printf("permutações um do outro\n");

    return 0;
}

int conta_digitos(int n, int d)
{
    int count = 0;

    for (n; n > 0; n /= 10)
        if (n % 10 == d)
            count++;

    return count;
}

int eh_permutacao(int n1, int n2)
{
    int permutacao = 1, aux = n1;

    for (aux; aux > 0; aux /= 10)
        if (conta_digitos(n1, n1 % 10) != conta_digitos(n2, n1 % 10))
        {
            permutacao = 0;
            break;
        }

    return permutacao;
}
