//Atividade de Linguagem C 06/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EX1
void questao1(int *a, int *b);
int main(void)
{
  int n1, n2, resposta;
  printf("Digite dois n�meros: ");
    scanf("%d %d", &n1, &n2);
  questao1(&n1, &n2);
  printf("Subtra��o = %d\n", n1);
  printf("Soma = %d", n2);
  return 0;
}
void questao1(int *a, int *b)
{
  int aux;
  aux=*a;
  *a= *a-*b;
  *b= *b+aux;
  return;
}
