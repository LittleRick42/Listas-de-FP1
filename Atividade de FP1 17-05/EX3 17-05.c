//Atividade de Linguagem C 17/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//EX3
void semRepeticao(int* vetor_original, int** vetor_final, int tam, int tamanho);
int main()
{
  int* vetor;
  int* vetor_final;
  int tam=0, repetido=0, aleatorio=0;
  while(tam<=0)
  {
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
  }
  int tamanho=tam;
  while(aleatorio<=0)
  {
    printf("Digite o limite para os números aleatórios: ");
    scanf("%d", &aleatorio);
  }
  printf("\nVetor original[%d]:\n", tam);
  srand(time(NULL));
  vetor= (int*) malloc (tam * sizeof(int));
  for(int i=0; i<tam; i++)
  {
    vetor[i] = rand()%(aleatorio+1);
    printf("%d, ", vetor[i]);
    for(int j=0; j<i; j++)
    {
      if(vetor[i]==vetor[j])
      {
        tamanho--;
        vetor[i]=-1;
        break;
      }
    }
  }
  printf("\n\nVetor com os números usados[%d]:\n", tamanho);
  vetor_final=(int*) malloc (tamanho*sizeof(int));
  semRepeticao(vetor, &vetor_final, tam, tamanho);

  free(vetor);
  vetor=NULL;
  free(vetor_final);
  vetor_final=NULL;
  return 0;
}

void semRepeticao(int* vetor_original, int** vetor_final, int tam, int tamanho)
{
  int aux=0;
  for(int a=0; a<tamanho; a++)
  {
    for(int b=aux; b<tam; b++)
    {
      if(vetor_original[b]==-1)
      {
        aux++;
        continue;
      }
      else
      {
        *vetor_final[a]= vetor_original[b];
        aux++;
        break;
      }
    }
    printf("%d, ", *vetor_final[a]);
  }
  return;
}
