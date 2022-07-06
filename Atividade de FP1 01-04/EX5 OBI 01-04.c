//Atividade de Linguagem C 01/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX5
#include <stdio.h>
#include <math.h>
int main (void)
{
float A, G, Ra, Rg;
float TAlcool, TGasolina;

printf("Digite os preços do álcool, da gasolina e do rendimento de cada um deles: ");
  scanf("%f %f %f %f", &A, &G, &Ra, &Rg);

TAlcool = Ra/A;
TGasolina = Rg/G;

if (TAlcool > TGasolina)
  {
  printf ("O melhor combustível é:\nA");
  return 0;
  }

else if (TAlcool == TGasolina)
  {
  printf ("O melhor combustível é indiferente, portanto:\nG");
  return 0;
  }

else
  {
  printf ("O melhor combustível é:\nG");
  return 0;
  }
}

