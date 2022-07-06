//Atividade de Linguagem C 06/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EX5
void removeExtremos(int *n, int *pri, int *ult);
int main(void)
{
  int num, primeiro, ultimo, eh_palindromo=1;
  printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);
  while(num>=10 && eh_palindromo==1)
  {
    removeExtremos(&num, &primeiro, &ultimo);
    if(primeiro!=ultimo)
      eh_palindromo=0;
  }
  if(eh_palindromo==1)
    printf("� pal�ndromo!");
  else
    printf("N�o pal�ndromo!");
  return 0;
}

void removeExtremos(int *n, int *pri, int *ult)
{
  int tn,pot;
  *ult = *n % 10;
  pot=1;
  tn = *n;
  while(tn >= 10)
  {
    tn = tn/10;
    pot *= 10;
  }
  *pri = *n / pot;
  *n = *n % pot;
  *n = *n / 10;
  return;
}
