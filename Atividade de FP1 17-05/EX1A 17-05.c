//Atividade de Linguagem C 17/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//EX1
//a)
int* criaVetor(int tam, int lim);
int main()
{
  int tam=0, lim=0;
  int* vetor;
  while(tam<=0 || lim<=0)
  {
    printf("Digite o tamanho do vetor e o limite de número aleatórios (Maiores que 0): ");
    scanf("%d %d", &tam, &lim);
  }
  vetor = criaVetor(tam, lim);
  printf("Esses são valores aleatórios do vetor[%d]:\n", tam);
  for(int i=0; i<tam; i++)
  {
    printf("%d ", vetor[i]);
  }
  free(vetor);
  vetor=NULL;
  return 0;
}

int* criaVetor(int tam, int lim)
{
  int* vetor;
  int numero;
  vetor = (int*) malloc(tam * sizeof (int));
  srand(time(NULL));
  for(int i=0; i<tam; i++)
  {
    vetor[i]= rand()%(lim+1);
  }
  return vetor;
}
