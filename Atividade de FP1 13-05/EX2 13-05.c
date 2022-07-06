//Atividade de Linguagem C 13/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define TAMANHO 7

//EX2
int main(void)
{
  int pascal[TAMANHO][TAMANHO];
  printf("Este é o triângulo de pascal:\n\n");
  for(int i=0; i<TAMANHO; i++)
  {
    for(int j=0; j<=i; j++)
    {
      if (j==0 || j==i)
      {
        pascal[i][j]= 1;
        printf("%d ", pascal[i][j]);
      }
      else
      {
        pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        printf("%d ", pascal[i][j]);
      }
    }
    printf("\n");
  }
  return 0;
}
