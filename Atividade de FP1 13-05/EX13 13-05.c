//Atividade de Linguagem C 13/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define TAMANHO 3

//EX13 (EX4 com funções)
void preencherMatriz(int qudr_magico[][TAMANHO]);
int somaLinhasColunas(int qudr_magico[][TAMANHO], int *eh_magico);
int main(void)
{
  int qudr_magico[TAMANHO][TAMANHO], eh_magico=1, soma;
  printf("Digite os números da matriz para verificar se é um quadrado mágico.\n");
  preencherMatriz(qudr_magico);
  soma = somaLinhasColunas(qudr_magico, &eh_magico);
  if(eh_magico==0)
    printf("Essa matriz não é um quadrado mágico.");
  else
    printf("Essa matriz é um quadrado mágico!!\nSoma: %d", soma);
  return 0;
}

void preencherMatriz(int qudr_magico[][TAMANHO])
{
  for(int i=0; i<TAMANHO; i++)
  {
    for(int j=0; j<TAMANHO; j++)
    {
      printf("Digite o número (%d, %d): ", i+1, j+1);
      scanf("%d", &qudr_magico[i][j]);
    }
  }
}

int somaLinhasColunas(int qudr_magico[][TAMANHO], int *eh_magico)
{
  int soma_l=0, soma_linha=0, soma_c=0, soma_coluna=0;
  for(int k=0; k<TAMANHO; k++)
  {
    soma_l+=qudr_magico[0][k];
    soma_c+=qudr_magico[k][0];
  }
  for(int a=0; a<TAMANHO; a++)
  {
    soma_linha=0, soma_coluna=0;
    for(int b=0; b<TAMANHO; b++)
    {
      soma_linha+=qudr_magico[a][b];
      soma_coluna+=qudr_magico[b][a];
    }
    if(soma_l!=soma_linha || soma_c!=soma_coluna)
    {
      eh_magico=0;
      break;
    }
  }
  return soma_l;
}
