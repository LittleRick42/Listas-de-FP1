//Atividade de Linguagem C 03/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EX3
int testaTipoChar (char c);
int main(void)
{
  char caracter;
  int classificacao;
  printf("Digite qualquer caracter do teclado: ");
    scanf("%c", &caracter);
  classificacao = testaTipoChar(caracter);
  if(classificacao==1)
    printf("Classifica��o 1 - � uma letra mai�scula!");
  else if(classificacao==2)
    printf("Classifica��o 2 - � uma letra min�scula!");
  else if(classificacao==3)
    printf("Classifica��o 3 - � um d�gito!");
  else
    printf("Classifica��o 0 - � um caracter diferente!");
  return 0;
}



int testaTipoChar (char c)
{
  int tipo;
  if(c>=65 && c<=90)
    tipo=1;
  else if(c>=97 && c<=122)
    tipo=2;
  else if(c>=48 && c<=57)
    tipo=3;
  else
    tipo=0;
  return tipo;
}
