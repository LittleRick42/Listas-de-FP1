//Atividade de Linguagem C 01/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX5
#include <stdio.h>
#include <math.h>
int main (void)
{
float A, G, Ra, Rg;
float TAlcool, TGasolina;

printf("Digite os pre�os do �lcool, da gasolina e do rendimento de cada um deles: ");
  scanf("%f %f %f %f", &A, &G, &Ra, &Rg);

TAlcool = Ra/A;
TGasolina = Rg/G;

if (TAlcool > TGasolina)
  {
  printf ("O melhor combust�vel �:\nA");
  return 0;
  }

else if (TAlcool == TGasolina)
  {
  printf ("O melhor combust�vel � indiferente, portanto:\nG");
  return 0;
  }

else
  {
  printf ("O melhor combust�vel �:\nG");
  return 0;
  }
}

