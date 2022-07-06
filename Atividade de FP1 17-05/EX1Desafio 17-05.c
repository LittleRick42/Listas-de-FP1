//Atividade de Linguagem C 17/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//EX1
//Desafio)
void criaVetorPorReferencia(int **v, int tam, int lim);
int main()
{
  int tam=0, lim;
  int* vetor;
  while(tam<=0)
  {
    printf("Digite o tamanho do vetor e o limite de número aleatórios (Maiores que 0): ");
    scanf("%d %d", &tam, &lim);
  }
  printf("\nEsses são valores aleatórios do vetor[%d]:\n", tam);
  criaVetorPorReferencia(&vetor, tam, lim);*/
  /*for(int i=0; i<tam; i++)
  { Não funciona por algum motivo
    printf("%d ", vetor[i]);
  }*/
  /*free(vetor);
  vetor=NULL;
  return 0;
}

void criaVetorPorReferencia(int **v, int tam, int lim)
{
  *v = (int*) malloc(tam * sizeof (int));
  srand(time(NULL));
  for(int i=0; i<tam; i++)
  {
    *v[i]= rand()%(abs(lim)*2+1)-abs(lim);
    printf("%d ", *v[i]);
  }
  return;
}
