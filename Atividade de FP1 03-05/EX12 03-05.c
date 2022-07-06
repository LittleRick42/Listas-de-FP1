//Atividade de Linguagem C 03/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EX12
int ultimos_digitos (int a, int b);
int main(void)
{
  int num1=0, num2=0, retorno;
  while(num1<=0 || num2<=0)
  {
  printf("Digite dois n�meros naturais maiores que zero: ");
    scanf("%d %d", &num1, &num2);
  }
  retorno = ultimos_digitos (num1, num2);
  printf("\nO �ltimo n�mero corresponde os �ltimos do primeiro?\n");
  if(retorno==1)
    printf("1 - Sim");
  else
    printf("0 - N�o");
  return 0;
}
int ultimos_digitos (int a, int b)
{
  while(b!=0 && a%10==b%10)
  {
    a = a/10;
    b = b/10;
  }
  if(b==0)
    return 1;
  else
    return 0;
}
