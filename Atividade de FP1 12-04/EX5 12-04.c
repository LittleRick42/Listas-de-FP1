//Atividade de Linguagem C 12/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX5

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
int i, bit=0, numero, sequencia1, sequencia2;

printf("Digite o n�mero de entradas para a sequ�ncia: ");
  scanf("%d", &numero);

if (numero<=0)
printf("O n�mero precisa ser maior que 0.");

else
  {
    printf("Digite os n�meros:\n");
    scanf("%d", &sequencia1);
    for(i=2; i<=numero; i++)
    {
      scanf("%d", &sequencia2);
      if (sequencia1>sequencia2)
      {
        bit+=1;
        sequencia1=sequencia2;
      }
      else
      {
        sequencia1=sequencia2;
      }
    }
  }
if (bit==0)
  printf("Est� em ordem crescente?\nSim! ");

else
  printf("Est� em ordem crescente?\nN�o. ");

return 0;
}
