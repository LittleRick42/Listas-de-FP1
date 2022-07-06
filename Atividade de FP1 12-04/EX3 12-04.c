//Atividade de Linguagem C 12/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
int i, j, numero, funcao;

printf("Digite o número para imprimir a função f(x)=x²+x+1: ");
  scanf("%d", &numero);

if (numero<=0)
printf("O número precisa ser maior que 0.");

else
  {
    for(i=-numero; i<=numero; i++)
    {
    funcao=(pow(i,2)+i+1);
      if (i<0)
        printf("%d ", i);
      else
        printf(" %d ", i);

      for(j=0; j<(funcao-1); j++)
      {
        printf("-");
      }
      printf("*\n");
    }
  }
return 0;
}
