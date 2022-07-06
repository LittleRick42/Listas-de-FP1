//Atividade de Linguagem C 12/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX2

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
int m, resultado, numero_inicial_sequencia, aux, resultado_soma = 0, achou = 0;

printf("Digite um numero natural: ");
scanf("%d", &m);

resultado = m * m * m;
for (int i = 1; i < resultado && !achou; i += 2)
    {
        aux = i;
        resultado_soma = 0;
        for (int j = 0; j < m; j++)
        {
            resultado_soma += aux;
            aux += 2;
        }
        if (resultado == resultado_soma)
            achou = 1;
            numero_inicial_sequencia = i;
            aux = numero_inicial_sequencia;
    }

    for (int i = 0; i < m; i++, aux += 2)
    {
        printf("%d ", aux);
    }
    printf("\n");
    return 0;
}
