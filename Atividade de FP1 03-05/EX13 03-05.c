//Atividade de Linguagem C 03/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EX13
int trecho_eh_igual(int n1, int n2);
int tem_trecho(int n1, int n2);
int faz_verificacao_trecho(int maior, int menor, int valor_retorno);
int main(void)
{
    int n1, n2, eh_segmento;

    printf("Digite dois numeros separados por espacos: ");
    scanf("%d %d", &n1, &n2);

    eh_segmento = tem_trecho(n1, n2);

    switch (eh_segmento)
    {
        case 1:
            printf("%d é segmento de %d", n1, n2);
            break;

        case 2:
            printf("%d é segmento de %d", n2, n1);
            break;

        default:
            printf("Um numero nao eh segmento do outro");
    }

    printf("\n");

    return 0;
}

int trecho_eh_igual(int n1, int n2)
{
    while (n2 > 0 && n1 % 10 == n2 % 10)
        n1 /= 10, n2 /= 10;

    return n2 == 0 ? 1 : 0;
}

int tem_trecho(int n1, int n2)
{
    if (n1 > n2)
        return faz_verificacao_trecho(n1, n2, 2);

    return faz_verificacao_trecho(n2, n1, 1);
}

int faz_verificacao_trecho(int maior, int menor, int valor_retorno)
{
    int tem_trecho = 0;

    while(maior > 0)
    {
        if (trecho_eh_igual(maior, menor))
        {
            tem_trecho = 1;
            break;
        }

        maior /= 10;
    }

    return tem_trecho ? valor_retorno : 0;
}
