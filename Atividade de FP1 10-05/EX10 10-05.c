//Atividade de Linguagem C 10/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

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
    printf("Digite um número: ");
    scanf("%d", &vetor[i]);
    repeticao_vetor(vetor, i);
  }
  printf("Esses são os valores digitados: ");
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
      printf("Esse número já foi usado, digite-o novamente: ");
      scanf("%d", &vetor[numero]);
      j=0;
    }
  }
}
