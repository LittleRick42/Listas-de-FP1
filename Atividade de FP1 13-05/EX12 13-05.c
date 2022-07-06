//Atividade de Linguagem C 13/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define TAMANHO 10
#define NUMEROS 300

//EX12 (EX3 com fun��es)
int minimaxLinhaColuna(int matriz[][TAMANHO], int *linha, int *coluna);
int menorLinha(int matriz[][TAMANHO], int *linha);
int main(void)
{
  int matriz[TAMANHO][TAMANHO], linha, coluna, menor, maior;
  printf("Esta � a matriz:\n\n");
  srand(time(NULL));
  maior = minimaxLinhaColuna(matriz, &linha, &coluna);
  printf("\nEsta � linha da matriz com o maior elemento:\n");
  menor = menorLinha(matriz, &linha);
  printf("\nO maior elemento da matriz � o %d e e o menor elemento da linha � o %d.\n", maior, menor);
  printf("O elemento m�ximo est� presente na linha %d e na coluna %d.", linha+1, coluna+1);
  return 0;
}

int minimaxLinhaColuna(int matriz[][TAMANHO], int *linha, int *coluna)
{
  int maior=-1;
  for(int a=0; a<TAMANHO; a++)
  {
    for(int b=0; b<TAMANHO; b++)
    {
      matriz[a][b] = rand()%(NUMEROS+1);
      printf("%d ", matriz[a][b]);
      if(maior<matriz[a][b])
      {
        maior=matriz[a][b];
        *linha=a;
        *coluna=b;
      }
    }
    printf("\n");
  }
  return maior;
}

int menorLinha(int matriz[][TAMANHO], int *linha)
{
  int menor=NUMEROS+1;
  for(int j=0; j<TAMANHO; j++)
  {
    printf("%d ", matriz[*linha][j]);
    if(matriz[*linha][j]<menor)
      menor= matriz[*linha][j];
  }
  return menor;
}
