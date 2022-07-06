//Atividade de Linguagem C 13/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define N 3

//EX14 (EX5 com funções)
void preencherMatriz(int matriz_permutacao[][N], int *eh_permutacao);
void permutacaoMatriz(int matriz_permutacao[][N], int *eh_permutacao);
int main(void)
{
  int matriz_permutacao[N][N], eh_permutacao=1;
  printf("Digite os números da matriz para verificá-lo que é de permutação.\n");
  preencherMatriz(matriz_permutacao, &eh_permutacao);
  permutacaoMatriz(matriz_permutacao, &eh_permutacao);
  if(eh_permutacao==0)
    printf("Essa matriz não é uma permutação.");
  else
    printf("Essa matriz é uma permutação!!");
  return 0;
}

void preencherMatriz(int matriz_permutacao[][N], int *eh_permutacao)
{
  for(int i=0; i<N; i++)
  {
    for(int j=0; j<N; j++)
    {
      printf("Digite o número (%d, %d): ", i+1, j+1);
      scanf("%d", &matriz_permutacao[i][j]);
      if(matriz_permutacao[i][j]>=2 || matriz_permutacao[i][j]<=-1)
        *eh_permutacao=0;
    }
  }
  return;
}

void permutacaoMatriz(int matriz_permutacao[][N], int *eh_permutacao)
{
  int soma_linha=0, soma_coluna=0;
  for(int a=0; a<N; a++)
  {
    soma_linha=0, soma_coluna=0;
    for(int b=0; b<N; b++)
    {
      soma_linha+=matriz_permutacao[a][b];
      soma_coluna+=matriz_permutacao[b][a];
    }
    if(soma_linha!=1 || soma_coluna!=1)
    {
      *eh_permutacao=0;
      break;
    }
  }
  return;
}

