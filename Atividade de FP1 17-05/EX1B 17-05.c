//Atividade de Linguagem C 17/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//EX1
//b)
int* expandeVetor(int *v, int tam, int n, int lim);
int* criaVetor(int tam, int lim);
int main()
{
  int tam=0, lim=0, tam_expandido, expansao;
  int* vetor;
  while(tam<=0 || lim<=0)
  {
    printf("Digite o tamanho do vetor e o limite de número aleatórios (Maiores que 0): ");
    scanf("%d %d", &tam, &lim);
  }
  vetor = criaVetor(tam, lim);
  printf("Esses são valores aleatórios do vetor[%d] inicial:\n", tam);
  for(int i=0; i<tam; i++)
  {
    printf("%d ", vetor[i]);
  }
  printf("\n\nDigite o número que deve ser adicionado ao vetor anterior: ");
    scanf("%d", &tam_expandido);
  vetor = expandeVetor(vetor, tam, tam_expandido, lim);
  tam_expandido+=tam;
  printf("Esses são valores aleatórios do vetor[%d] final:\n", tam_expandido);
  for(int j=0; j<tam_expandido; j++)
  {
    printf("%d ", vetor[j]);
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

int* expandeVetor(int *v, int tam, int n, int lim)
{
  int* vetor;
  vetor = (int*) malloc(tam+n * sizeof (int));
  for(int i=0; i<tam; i++)
  {
    vetor[i]= v[i];
  }
  srand(time(NULL));
  for(int j=tam; j<tam+n; j++)
  {
    vetor[j]= rand()%(lim+1);
  }
  return vetor;
}
