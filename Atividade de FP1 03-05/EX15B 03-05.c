//Atividade de Linguagem C 03/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EX15
//b)
int sequencia_eh_toda_impar(int k);
int eh_piramidal_alternante(int n);

int main(void)
{
    int k, n, n_alternancia;

    printf("Digite quantas sequencias voce quer ler: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }

    n_alternancia = eh_piramidal_alternante(n);

    if (n_alternancia == 0)
        printf("Sequencia nao eh piramidal alternante");

    else
        printf("Sequencia é piramidal %d-alternante", n_alternancia);

    printf("\n");

    return 0;
}

int sequencia_eh_toda_impar(int k)
{
    int atual, anterior, eh_impar, travado = 0;

    for (int i = 0; i < k; i++)
    {
        printf("Digite um numero da sequencia: ");
        scanf("%d", &atual);
        if (i != 0 && atual % 2 != anterior % 2)
            eh_impar = -1,
            travado = 1;
        anterior = atual;
        if (!travado)
            eh_impar = atual % 2,
            travado = 1;
    }

    return eh_impar;
}

int eh_piramidal_alternante(int n)
{
    int anterior_eh_impar, atual_eh_impar, n_alternancia = 0, travado = 0;

    for (int i = 1; i <= n; i++)
    {
        atual_eh_impar = sequencia_eh_toda_impar(i);
        if (i != 1
            && !travado
            && (atual_eh_impar == -1 || atual_eh_impar == anterior_eh_impar))
        {
            n_alternancia = 0,
            travado = 1;
        }

        if (!travado)
            anterior_eh_impar = atual_eh_impar,
            n_alternancia++;
    }

    return n_alternancia;
}
