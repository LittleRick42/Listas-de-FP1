//Atividade de Linguagem C 10/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define TAMANHO 10

//EX10
void repeticao_vetor(int *vetor, int numero);
int main(void)
{
  int vetor[TAMANHO];
  for(int i=0; i<TAMANHO; i++)
  {
    printf("Digite um n�mero: ");
    scanf("%d", &vetor[i]);
    repeticao_vetor(vetor, i);
  }
  printf("Esses s�o os valores digitados: ");
  for(int k=0; k<TAMANHO; k++)
    printf("%d, ", vetor[k]);
  return 0;
}

void repeticao_vetor(int vetor[], int numero)
{
  for(int j=0; j<numero; j++)
  {
    while(vetor[numero]==vetor[j])
    {
      printf("Esse n�mero j� foi usado, digite-o novamente: ");
      scanf("%d", &vetor[numero]);
      j=0;
    }
  }
}
