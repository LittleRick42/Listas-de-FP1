//Atividade de Linguagem C 12/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX6

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
int i=3, cbit=0, dbit=0, igual=2, numero, sequencia1, sequencia2;

printf("Digite o número de entradas para a sequência: ");
  scanf("%d", &numero);

if (numero<=0)
  printf("O número precisa ser maior que 0.");

else
  {
    printf("Digite os números:\n");
    scanf("%d", &sequencia1);
    scanf("%d", &sequencia2);

    if(sequencia1>sequencia2)
    {
      for(i=i; i<=numero; i++)
      {
        sequencia1=sequencia2;
        scanf("%d", &sequencia2);
        if (sequencia1>=sequencia2)
          continue;
        dbit+=1;
      }
      if (dbit==0)
        printf("Os números estão em ordem decrescente!");
    }
    else
    {
      for(i=3; i<=numero; i++)
      {
        sequencia1=sequencia2;
        scanf("%d", &sequencia2);
        if (sequencia1<=sequencia2)
          continue;
        cbit+=1;
      }
      if (cbit==0)
        printf("Está em ordem crescente!");
    }

    if (cbit>0 || dbit>0)
      printf("Os números estão desordenados!");
  }
return 0;
}
