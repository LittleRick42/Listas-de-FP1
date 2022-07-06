//Atividade de Linguagem C 13/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define TAMANHO 5
#define NUMEROS 50

//EX1
int main(void)
{
  int vetor[TAMANHO][TAMANHO];
  printf("Este é um vetor %dx%d:\n\n", TAMANHO, TAMANHO);
  srand(time(NULL));
  for(int i=0; i<TAMANHO; i++)
  {
    for(int j=0; j<TAMANHO; j++)
    {
      vetor[i][j]= rand()%(NUMEROS+1);
      printf("%d ", vetor[i][j]);
    }
    printf("\n");
  }
  return 0;
}
