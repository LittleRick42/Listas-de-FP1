//Atividade de Linguagem C 01/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX4
#include <stdio.h>
#include <math.h>
int main (void)
{
int lado1, lado2, lado3;

printf("Insira o tamanho dos tr�s lados do tri�ngulo: ");
  scanf("%d %d %d", &lado1, &lado2, &lado3);

if ("%d"<=0 || lado1+lado2<=lado3 || lado1+lado3<=lado2 || lado2+lado3<=lado1)
  {
  printf("Essas medidas de tri�ngulo n�o existem!");
  return 0;
  }
else
  {
  if (lado1==lado2 && lado2==lado3)
    {
    printf("Esse tri�ngulo � equil�tero!");
    return 0;
    }

  else if (lado1==lado2 && lado2!=lado3 || lado1==lado3 && lado1!=lado2 || lado2==lado3 && lado3!=lado1)
    {
    printf("Esse tri�ngulo � is�celes!");
    return 0;
    }

  else
    {
    printf("Esse tri�ngulo � escaleno!");
    return 0;
    }
  }
}

