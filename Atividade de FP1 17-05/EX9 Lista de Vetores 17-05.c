//Atividade de Linguagem C 17/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Lista de Vetores
//EX9
void alocaVetores (int* vetor, int tamanho);
void intercalaVetores(int* v1, int* v2, int* v3, int n);
int main(void)
{
  int* vetor1;
  int* vetor2;
  int* vetor3;
  int tamanho, limite;
  srand(time(NULL));
  printf("Digite o tamanho dos vetores: ");
  scanf("%d", &tamanho);
  printf("Digite o limite dos números aleatórios: ");
  scanf("%d", &limite);
  alocaVetores (vetor1, tamanho);
  alocaVetores (vetor2, tamanho);
  printf("Esse é o primeiro vetor:\n");
  for (int i=0; i<tamanho; i++)
  {
    vetor1[i]= rand()%(limite+1);
    printf("%d, ", vetor1[i]);
  }
  printf("\n\nEste é o segundo vetor:\n");
  for (int j=0; j<tamanho; j++)
  {
    vetor2[j]= rand()%(limite+1);
    printf("%d, ", vetor2[j]);
  }
  printf("\n\nEsse é a junção dos vetores:\n");
  alocaVetores (vetor3, tamanho*2);
  intercalaVetores(vetor1, vetor2, vetor3, tamanho);

  free(vetor1);
  vetor1=NULL;
  free(vetor2);
  vetor2=NULL;
  return 0;
}

void alocaVetores (int* vetor, int tamanho)
{
  vetor = (int*) malloc (tamanho*sizeof(int));
  return;
}

void intercalaVetores(int* v1, int* v2, int* v3, int n)
{
  free(v1);
  v1=NULL;
  free(v2);
  v2=NULL;
  free(v3);
  v3=NULL;
  return;
}
