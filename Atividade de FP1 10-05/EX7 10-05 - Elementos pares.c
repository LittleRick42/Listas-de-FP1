//Atividade de Linguagem C 10/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define NUMEROS 10
#define TAMANHO 10

//EX7 - Elementos Pares
void preencheVetor(int v[]);
float media_vetor_par(int vetor[], int tamanho);
int main(void)
{
  int vetor[TAMANHO];
  float media;
  printf("Esse � o vetor:\n");
  preencheVetor(vetor);
  printf("\n\nEsses s�o os elementos pares:\n");
  media = media_vetor_par(vetor, TAMANHO);
  printf("\n\nEssa � a m�dia dos elementos pares: ");
  printf("%.2f", media);
  return 0;
}

void preencheVetor(int v[])
{
  srand(time(NULL));
  for (int i=0; i<TAMANHO; i++)
  {
    v[i]= rand()%(NUMEROS+1);
    printf("%d, ", v[i]);
  }
  return;
}

float media_vetor_par(int vetor[], int tamanho)
{
  float media, total=0, pares=0;
  for (int j=0; j<TAMANHO; j++)
    if(j%2==1)
    {
      printf("%d, ", vetor[j]);
      total+= vetor[j];
      pares++;
    }
  media = total/pares;
  return media;
}
