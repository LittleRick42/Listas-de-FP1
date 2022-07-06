//Atividade de Linguagem C 17/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//EX2
int* multiplicacaoVetor(int tamanho_v1, int tamanho_v2);
int main()
{
  int tam1=0, tam2=0, tam_f;
  int* vetor_f;
  while(tam1<=0 || tam2<=0)
  {
    printf("Digite o tamanho para cada um dos dois vetores: ");
    scanf("%d %d", &tam1, &tam2);
  }
  vetor_f = multiplicacaoVetor(tam1, tam2);
  tam_f = tam1*tam2;
  printf("\n\nEsse é vetor final, vetor1[%d] * vetor2[%d]:\nVetor[%d] = ", tam1, tam2, tam_f);
  for(int i=0; i<tam_f; i++)
  {
    printf("%d, ", vetor_f[i]);
  }
  free(vetor_f);
  vetor_f=NULL;
  return 0;
}

int* multiplicacaoVetor(int tamanho_v1, int tamanho_v2)
{
  int* vetor1;
  int* vetor2;
  int* vetor_final;
  int c=0, aleatorio=0, tm_total =tamanho_v1*tamanho_v2;
  vetor1=(int*) malloc (tamanho_v1*sizeof (int));
  vetor2=(int*) malloc (tamanho_v2*sizeof (int));
  vetor_final=(int*) malloc (tm_total*sizeof (int));
  while(aleatorio<=0)
  {
    printf("Digite o limite para os números aleatórios: ");
    scanf("%d", &aleatorio);
  }
  printf("\n\nEsses são os valores do vetor1[%d]:\n", tamanho_v1);
  for(int i=0; i<tamanho_v1; i++)
  {
    vetor1[i]= rand()%(aleatorio+1);
    printf("%d, ", vetor1[i]);
  }
  printf("\n\nEsses são os valores do vetor2[%d]:\n", tamanho_v2);
  for(int j=0; j<tamanho_v2; j++)
  {
    vetor2[j]= rand()%(aleatorio+1);
    printf("%d, ", vetor2[j]);
  }
  for(int a=0; a<tamanho_v1; a++)
  {
    for(int b=0; b<tamanho_v2; b++)
    {
      vetor_final[c] = vetor1[a]*vetor2[b];
      c++;
    }
  }
  return vetor_final;
}
