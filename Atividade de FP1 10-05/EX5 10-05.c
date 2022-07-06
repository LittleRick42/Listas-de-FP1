//Atividade de Linguagem C 10/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define N 10

//EX5
void preencheVetor(int v[], int n, int min, int max);
int main(void)
{
  int vetor[N], minimo, maximo;
  printf("Defina um número mínimo: ");
  scanf("%d", &minimo);
  maximo = minimo-1;
  while(minimo>maximo)
  {
    printf("Defina o número máximo: ");
    scanf("%d", &maximo);
  }
  preencheVetor(vetor, N, minimo, maximo);
  printf("\nVetor aleatório: ");

  for(int a=0; a<N; a++)
    printf("%d, ", vetor[a]);
  return 0;
}

void preencheVetor(int v[], int n, int min, int max)
{
  srand(time(NULL));
  for (int i=0; i<n; i++)
    v[i]= rand()%(max-min+1)+min;
  return;
}
