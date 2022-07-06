//Atividade de Linguagem C 03/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EX6
//b)
void imprimeVencedor(int resto);
int main(void)
{
  int resto=3, vencedor;
  while(resto>2 || resto<0)
  {
  printf("Digite um valor inteiro do resto, sendo 0, 1 ou 2: ");
    scanf("%d", &resto);
  }
  imprimeVencedor(resto);
  return 0;
}

void imprimeVencedor(int resto)
{
  if(resto==0)
    printf("O vencedor foi o Alexandre!");
  else if(resto==1)
    printf("A vencedora foi a Maria!");
  else
    printf("O vencedor foi o Rafael!");
  return;
}
