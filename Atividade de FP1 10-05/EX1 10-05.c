//Atividade de Linguagem C 10/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define TAMANHO 10

//EX1
int main(void)
{
  int vetor[TAMANHO];
  for(int i=0; i<TAMANHO; i++)
  {
    printf("Digite um n�mero: ");
    scanf("%d", &vetor[i]);

    for(int j=0; j<i; j++)
    {
      while(vetor[i]==vetor[j])
      {
        printf("Esse n�mero j� foi usado, digite-o novamente: ");
        scanf("%d", &vetor[i]);
        j=0;
      }
    }
  }
  printf("Esses s�o os valores digitados: ");
  for(int k=0; k<TAMANHO; k++)
    printf("%d, ", vetor[k]);
  return 0;
}
