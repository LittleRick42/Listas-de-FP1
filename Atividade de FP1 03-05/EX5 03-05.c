//Atividade de Linguagem C 03/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EX5
int retornaMaior(int n1, int n2);
int main(void)
{
  int num1, num2, maior;
  printf("Digite um n�mero: ");
    scanf("%d", &num1);
  printf("Digite outro n�mero: ");
    scanf("%d", &num2);
  maior = retornaMaior(num1, num2);
  printf("O maior n�mero �: %d", maior);
}

int retornaMaior(int n1, int n2)
{
  int maior = (n1+n2+abs(n1-n2))/2;
  return maior;
}
