//Atividade de Linguagem C 12/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX7

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
int i, bit=0, numero;

printf("Digite um n�mero e veja se ele � triangular: ");
  scanf("%d", &numero);

if (numero%2!=0)
  {
    printf("O n�mero n�o � triangular.");
    return 0;
  }

else
  {
    for(i=1; i<=numero; i++)
    {
      if (i*(i+1)*(i+2)==numero)
      {
        bit=1;
        break;
      }
      else if (i*(i+1)*(i+2)>=numero)
        break;
    }
  }

if (bit==0)
  printf("O n�mero n�o � triangular.");
else
  {
    printf("O n�mero � triangular!\n");
    printf("%d*%d*%d = %d", i, i+1, i+2, numero);
  }
return 0;
}
