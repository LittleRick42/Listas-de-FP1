//Atividade de Linguagem C 05/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX7

#include <stdio.h>

int main(void)
{
int i, numero, fibonacci, o_fibonacci=1, anterior=0;

printf("Digite o n�mero de valores que apareceram em Fibonacci: ");
  scanf("%d", &numero);

if (numero<=0)
  {
    printf("\nEsses n�meros n�o podem ser usados.");
    return 0;
  }

printf("\nEsses s�o os n�meros de Fibonacci requeridos:\n");
printf("0, 1, ");
for(i=0; i<numero-2; i++)
  {
    fibonacci = o_fibonacci+anterior;
    printf("%d, ", fibonacci);
    anterior = o_fibonacci;
    o_fibonacci = fibonacci;
  }
return 0;
}
