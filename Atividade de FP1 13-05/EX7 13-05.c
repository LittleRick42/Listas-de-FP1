//Atividade de Linguagem C 13/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define N 4
#define NUMEROS 50
#define PRODUTO 2

//EX7
void imprimeMatrizOriginal(int matriz[][N]);
void somaMatrizes(int matriz1[][N], int matriz2[][N]);
void subtracaoMatrizes(int matriz1[][N], int matriz2[][N]);
void multiplicacaoMatrizes(int matriz1[][N]);
int main(void)
{
  int matriz1[N][N], matriz2[N][N];
  srand(time(NULL));
  for(int i=0; i<N; i++)
  {
    for(int j=0; j<N; j++)
    {
      matriz1[i][j]= rand()%(NUMEROS+1);
      matriz2[i][j]= rand()%(NUMEROS+1);
    }
  }
  printf("Matriz 1:\n\n");
  imprimeMatrizOriginal(matriz1);
  printf("\n\nMatriz 2:\n\n");
  imprimeMatrizOriginal(matriz2);
  printf("\n\nMatriz 1 + Matriz 2:\n\n");
  somaMatrizes(matriz1, matriz2);
  printf("\n\nMatriz 1 - Matriz 2:\n\n");
  subtracaoMatrizes(matriz1, matriz2);
  printf("\n\nMatriz 1 * %d:\n\n", PRODUTO);
  multiplicacaoMatrizes(matriz1);
  return 0;
}

void imprimeMatrizOriginal(int matriz[][N])
{
  for(int i=0; i<N; i++)
  {
    for(int j=0; j<N; j++)
    {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}

void somaMatrizes(int matriz1[][N], int matriz2[][N])
{
  int ma_soma[N][N];
  for(int i=0; i<N; i++)
  {
    for(int j=0; j<N; j++)
    {
      ma_soma[i][j]= matriz1[i][j] + matriz2[i][j];
    }
  }
  imprimeMatrizOriginal(ma_soma);
}

void subtracaoMatrizes(int matriz1[][N], int matriz2[][N])
{
  int ma_subtracao[N][N];
  for(int i=0; i<N; i++)
  {
    for(int j=0; j<N; j++)
    {
      ma_subtracao[i][j]= matriz1[i][j] - matriz2[i][j];
    }
  }
  imprimeMatrizOriginal(ma_subtracao);
}

void multiplicacaoMatrizes(int matriz1[][N])
{
  int ma_produto[N][N];
  for(int i=0; i<N; i++)
  {
    for(int j=0; j<N; j++)
    {
      ma_produto[i][j]= matriz1[i][j]*PRODUTO;
    }
  }
  imprimeMatrizOriginal(ma_produto);
}

