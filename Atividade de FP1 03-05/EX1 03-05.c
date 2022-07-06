//Atividade de Linguagem C 03/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EX1
int ehBissexto(int ano);
int main(void)
{
  int ano, bissexto;
  printf("Digite um ano: ");
    scanf("%d", &ano);
  bissexto = ehBissexto(ano);
  if(bissexto==1)
    printf("O ano de %d � bissexto!", ano);
  else
    printf("O ano de %d n�o � bissexto!", ano);
  return 0;
}

int ehBissexto(int ano)
{
  int bit;
  if(ano%4==0 && (ano % 100 != 0 || ano % 400 == 0))
    bit=1;
  else
    bit=0;
  return bit;
}
