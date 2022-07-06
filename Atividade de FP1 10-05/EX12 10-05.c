//Atividade de Linguagem C 10/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define N 10

//EX12
void soma_vetores_inversos(int vetor1[], int vetor2[]);
int main(void)
{
  int vetor1[N], vetor2[N], vetor_final[N];
  srand(time(NULL));
  printf("Este � o primeiro vetor:\n");
  for (int i=0; i<N; i++)
  {
    vetor1[i]= rand()%N+1;
    printf("%d, ", vetor1[i]);
  }
  printf("\n\nEste � o segundo vetor:\n");
  for (int k=0; k<N; k++)
  {
    vetor2[k]= rand()%N+1;
    printf("%d, ", vetor2[k]);
  }
  printf("\n\nEsta � a soma dos primeiros valores do primeiro vetor com os �ltimos do segundo vetor:\n");
  soma_vetores_inversos(vetor1, vetor2);
  return 0;
}

void soma_vetores_inversos(int vetor1[], int vetor2[])
{
  int vetor_final[N];
  for (int m=0; m<N; m++)
  {
    vetor_final[m]= vetor1[m]+vetor2[N-m-1];
    printf("%d, ", vetor_final[m]);
  }
}
