//Atividade de Linguagem C 03/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EX2
int arredonda (float x);
int main(void)
{
  float numero;
  int n_arredondado;
  printf("Digite um numero racional: ");
    scanf("%f", &numero);
  n_arredondado = arredonda(numero);
  printf("O n�mero arredondado de maior magnitude �: %d", n_arredondado);
  return 0;
}

int arredonda (float x)
{
  int arredondar;
  if (x>=0)
    arredondar = ceil(x);
  else
    arredondar = floor(x);
  return arredondar;
}
