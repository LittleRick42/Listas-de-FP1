//Atividade de Linguagem C 13/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define TAMANHO 10
#define NUMEROS 300

//EX3
int main(void)
{
  int matriz[TAMANHO][TAMANHO], linha, coluna, menor=NUMEROS+1, maior=-1;
  printf("Esta é a matriz:\n\n");
  srand(time(NULL));
  for(int a=0; a<TAMANHO; a++)
  {
    for(int b=0; b<TAMANHO; b++)
    {
      matriz[a][b] = rand()%(NUMEROS+1);
      printf("%d ", matriz[a][b]);
      if(maior<matriz[a][b])
      {
        maior=matriz[a][b];
        linha=a;
        coluna=b;
      }
    }
    printf("\n");
  }
  printf("\nEsta é linha da matriz com o maior elemento:\n");
  for(int j=0; j<TAMANHO; j++)
  {
    printf("%d ", matriz[linha][j]);
    if(matriz[linha][j]<menor)
      menor= matriz[linha][j];
  }
  printf("\n\nO maior elemento da matriz é o %d e e o menor elemento da linha é o %d.\n", maior, menor);
  printf("O elemento máximo está presente na linha %d e na coluna %d.", linha+1, coluna+1);
  return 0;
}
