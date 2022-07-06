//Atividade de Linguagem C 10/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define NUMEROS 10
#define TAMANHO 10

//EX8 - Elementos Pares
void preencheVetor(int v[], int *max, int *min);
float media_vetor_par(int vetor[], int tamanho);
int main(void)
{
  int vetor[TAMANHO], maximo=0, minimo;
  float media;
  printf("Esse é o vetor:\n");
  preencheVetor(vetor, &maximo, &minimo);
  printf("\n\nEsse é o maior e menor valor do vetor:\n");
  printf("Maior: %d\nMenor: %d", maximo, minimo);
  printf("\n\nEsses são os elementos pares:\n");
  media = media_vetor_par(vetor, TAMANHO);
  printf("\n\nEssa é a média dos elementos pares: ");
  printf("%.2f", media);
  return 0;
}

void preencheVetor(int v[], int *max, int *min)
{
  int aux;
  srand(time(NULL));
  for (int i=0; i<TAMANHO; i++)
  {
    v[i]= rand()%(NUMEROS+1);
    printf("%d, ", v[i]);
    *max= (*max+v[i]+abs(*max-v[i]))/2;
    if(i==0)
      *min = *max;
    else
      *min= (*min+v[i]-abs(*min-v[i]))/2;
  }
  return;
}

float media_vetor_par(int vetor[], int tamanho)
{
  float media, total=0, pares=0;
  for (int j=0; j<TAMANHO; j++)
  {
    if(j%2==1)
    {
      printf("%d, ", vetor[j]);
      total+= vetor[j];
      pares++;
    }
  }
  media = total/pares;
  return media;
}
