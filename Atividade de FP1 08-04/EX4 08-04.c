//Atividade de Linguagem C 08/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX4

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
int i=1, n1, n2, min;

printf("Digite dois n�meoros inteiros: ");
    scanf("%d %d", &n1, &n2);

min=n1*n2;

for (i=1; i<=min; i++)
  {
    if (i%n1==0 && i%n2==0)
      min=i;
  }
printf("Esse � o MMC de %d e %d:\n%d", n1, n2, min);
return 0;
}
