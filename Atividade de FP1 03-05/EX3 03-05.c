//Atividade de Linguagem C 03/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

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
    printf("Classificação 1 - É uma letra maiúscula!");
  else if(classificacao==2)
    printf("Classificação 2 - É uma letra minúscula!");
  else if(classificacao==3)
    printf("Classificação 3 - É um dígito!");
  else
    printf("Classificação 0 - É um caracter diferente!");
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
