//Atividade de Linguagem C 05/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX7

#include <stdio.h>

int main(void)
{
int i, numero, fibonacci, o_fibonacci=1, anterior=0;

printf("Digite o número de valores que apareceram em Fibonacci: ");
  scanf("%d", &numero);

if (numero<=0)
  {
    printf("\nEsses números não podem ser usados.");
    return 0;
  }

printf("\nEsses são os números de Fibonacci requeridos:\n");
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
