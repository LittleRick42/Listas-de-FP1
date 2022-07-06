//Atividade de Linguagem C 01/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX4
#include <stdio.h>
#include <math.h>
int main (void)
{
int lado1, lado2, lado3;

printf("Insira o tamanho dos três lados do triângulo: ");
  scanf("%d %d %d", &lado1, &lado2, &lado3);

if ("%d"<=0 || lado1+lado2<=lado3 || lado1+lado3<=lado2 || lado2+lado3<=lado1)
  {
  printf("Essas medidas de triângulo não existem!");
  return 0;
  }
else
  {
  if (lado1==lado2 && lado2==lado3)
    {
    printf("Esse triângulo é equilétero!");
    return 0;
    }

  else if (lado1==lado2 && lado2!=lado3 || lado1==lado3 && lado1!=lado2 || lado2==lado3 && lado3!=lado1)
    {
    printf("Esse triângulo é isóceles!");
    return 0;
    }

  else
    {
    printf("Esse triângulo é escaleno!");
    return 0;
    }
  }
}

