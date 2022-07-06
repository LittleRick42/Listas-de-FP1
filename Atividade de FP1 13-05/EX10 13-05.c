//Atividade de Linguagem C 13/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define TAMANHO 5
#define NUMEROS 50

//EX10 (EX1 com funções)
void preencherMatriz(int matriz[][TAMANHO]);
int main(void)
{
  int matriz[TAMANHO][TAMANHO];
  printf("Este é um vetor %dx%d:\n\n", TAMANHO, TAMANHO);
  srand(time(NULL));
  preencherMatriz(matriz);
  return 0;
}

void preencherMatriz(int matriz[][TAMANHO])
{
  for(int i=0; i<TAMANHO; i++)
  {
    for(int j=0; j<TAMANHO; j++)
    {
      matriz[i][j]= rand()%(NUMEROS+1);
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  return;
}
