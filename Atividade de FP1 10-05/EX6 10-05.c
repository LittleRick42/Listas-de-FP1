//Atividade de Linguagem C 10/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define NUMEROS 10
#define TAMANHO 10

//EX6
void direta_vetor (int v_direto[]);
void inversa_vetor (int v_inverso[]);
int main(void)
{
  int vetor[TAMANHO];
  srand(time(NULL));
  for (int i=0; i<TAMANHO; i++)
    vetor[i]= rand()%(NUMEROS+1);
  direta_vetor(vetor);
  inversa_vetor(vetor);
  return 0;
}

void direta_vetor (int v_direto[])
{
  printf("Vetor de ordem direta:\n");
  for (int j=0; j<TAMANHO; j++)
    printf("%d, ", v_direto[j]);
  return;
}

void inversa_vetor (int v_inverso[])
{
  printf("\n\nVetor de ordem inversa:\n");
  for (int j=TAMANHO-1; j>=0; j--)
    printf("%d, ", v_inverso[j]);
  return;
}
