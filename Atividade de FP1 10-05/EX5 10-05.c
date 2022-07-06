//Atividade de Linguagem C 10/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o

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
  printf("Defina um n�mero m�nimo: ");
  scanf("%d", &minimo);
  maximo = minimo-1;
  while(minimo>maximo)
  {
    printf("Defina o n�mero m�ximo: ");
    scanf("%d", &maximo);
  }
  preencheVetor(vetor, N, minimo, maximo);
  printf("\nVetor aleat�rio: ");

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
