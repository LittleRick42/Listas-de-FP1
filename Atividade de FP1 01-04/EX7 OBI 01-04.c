//Atividade de Linguagem C 01/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX7
#include <stdio.h>
#include <math.h>
int main (void)
{
int C;

printf("Digite o consumo de água de uma residência, em metros cúbicos: ");
  scanf("%d", &C);

if (C<=10)
  {
  printf("O valor da conta de água é igual a R$7,00");
  return 0;
  }

else if (C>=11 && C<=30)
  {
  printf("O valor da conta de água é igual a R$%d,00", C-3);
  return 0;
  }

else if (C>= 31 && C<=100)
  {
  printf("O valor da conta de água é igual a R$%d,00", (C-30)*2+27);
  return 0;
  }

else
  {
  printf("O valor da conta de água é igual a R$%d,00", (C-100)*5+167);
  return 0;
  }
}

