//Atividade de Linguagem C 08/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
int valor, max=0;

printf("Digite qualquer valor inteiro: ");
  scanf("%d", &valor);

while (valor>=0)
  {
    max = (valor+max+abs(valor-max))/2;
    printf("Digite qualquer valor inteiro: ");
      scanf("%d", &valor);
  }
printf("\nO maior valor digitado é: %d", max);
return 0;
}
