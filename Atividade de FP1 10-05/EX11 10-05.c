//Atividade de Linguagem C 10/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define N 10

//EX11
void diminuir_vetor(int vetor[], int num, int *flag);
int main(void)
{
  int vetor[N], numero, flag=0;
  srand(time(NULL));
  printf("Este é o vetor: ");
  for (int i=0; i<N; i++)
  {
    vetor[i]= rand()%N+1;
    printf("%d, ", vetor[i]);
  }
  printf("\n");
  while(N-flag!=0)
  {
    printf("\nDigite um número que esteja ou não na tabela: ");
    scanf("%d", &numero);
    diminuir_vetor(vetor, numero, &flag);
  }
  printf("Fim");
  return 0;
}

void diminuir_vetor(int vetor[], int num, int *flag)
{
  for (int j=0; j<N; j++)
  {
    if(vetor[j]==num)
    {
      for (int k=j; k<N; k++)
      {
        vetor[k]=vetor[k+1];
      }
      *flag= *flag+1;
      j--;
    }
  }
  for (int m=0; m<N-*flag; m++)
  {
    printf("%d, ", vetor[m]);
  }
  printf("\n");
}
