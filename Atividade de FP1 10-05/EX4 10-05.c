//Atividade de Linguagem C 10/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define N 10

//EX4
void preencheVetor(int v[], int n, int lim);
int main(void)
{
  int vetor[N], limite;
  printf("Defina um limite para os n�meros que come�am do 0: ");
  scanf("%d", &limite);
  preencheVetor(vetor, N, limite);
  printf("\nVetor aleat�rio: ");
  for(int a=0; a<N; a++)
  printf("%d, ", vetor[a]);
}

void preencheVetor(int v[], int n, int lim)
{
  srand(time(NULL));
  for (int i=0; i<n; i++)
    v[i]= rand()%(lim+1);
  return;
}
