//Atividade de Linguagem C 05/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX6

#include <stdio.h>

int main(void)
{
int i, numero, fatorial=1;

printf("Digite um valor natural: ");
  scanf("%d", &numero);

if (numero<0)
  {
    printf("N�o foi este o n�mero requerido.");
    return 0;
  }

for(i=0; i<numero; i++)
  fatorial*=(numero-i);

printf("O fatorial de %d equivale a: %d", numero, fatorial);
return 0;
}
