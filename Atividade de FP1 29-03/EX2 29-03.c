//Atividade de Linguagem C 29/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX2
#include <stdio.h>
#include <time.h>
int main ()
{
int lado, altura, area, perimetro;

printf("Insira o valor do lado e da altura do ret�ngulo: ");
scanf("%d %d", &lado, &altura);

area = lado*altura;
perimetro = 2*lado+2*altura;
printf("O per�metro � maior que a �rea?\n");

if (perimetro>area)
  {
  printf("Sim!");
  return 0;
  }
else
  {
  printf("N�o.");
  return 0;
  }
}
