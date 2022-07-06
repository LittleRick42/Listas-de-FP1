//Atividade de Linguagem C 10/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define NUMEROS 6
#define TAMANHO 10

//EX9
void intercalaVetores(int v1[], int v2[], int v3[], int n);
int main(void)
{
  int vetor1[TAMANHO], vetor2[TAMANHO], vetor3[TAMANHO*2];
  srand(time(NULL));
  printf("Esse é o primeiro vetor:\n");
  for (int i=0; i<TAMANHO; i++)
  {
    vetor1[i]= rand()%(NUMEROS+1);
    printf("%d, ", vetor1[i]);
  }
  printf("\n\nEste é o segundo vetor:\n");
  for (int j=0; j<TAMANHO; j++)
  {
    vetor2[j]= rand()%(NUMEROS+1);
    printf("%d, ", vetor2[j]);
  }
  printf("\n\nEsse é a junção dos vetores:\n");
  intercalaVetores(vetor1, vetor2, vetor3, TAMANHO);
  return 0;
}

void intercalaVetores(int v1[], int v2[], int v3[], int n)
{
  int nm=0;
  for (int i=0; i<2*TAMANHO; i++)
  {
    if(i%2==0)
    {
      v3[i] = v1[nm/2];
      printf("%d, ", v3[i]);
    }
    else
    {
      v3[i] = v2[nm/2];
      printf("%d, ", v3[i]);
    }
    nm++;
  }
  return;
}
