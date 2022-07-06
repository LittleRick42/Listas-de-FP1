//Atividade de Linguagem C 03/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EX8
void determinaValores(int n);
int main(void)
{
  int numero=-1;
  while (numero<0)
  {
  printf("Digite um número natural: ");
    scanf("%d", &numero);
  }
  determinaValores(numero);
  return 0;
}

void determinaValores(int n)
{
  int a, b, c;
    for(a=1; a<=n; a++)
    {
      for(b=1; b<=n; b++)
      {
        for(c=n; c>=1; c--)
        {
          if(a+b+c==n)
            printf("%d + %d + %d = %d\n", a, b, c, n);
        }
      }
    }
  return;
}
