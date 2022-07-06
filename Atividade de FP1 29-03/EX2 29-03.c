//Atividade de Linguagem C 29/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX2
#include <stdio.h>
#include <time.h>
int main ()
{
int lado, altura, area, perimetro;

printf("Insira o valor do lado e da altura do retângulo: ");
scanf("%d %d", &lado, &altura);

area = lado*altura;
perimetro = 2*lado+2*altura;
printf("O perímetro é maior que a área?\n");

if (perimetro>area)
  {
  printf("Sim!");
  return 0;
  }
else
  {
  printf("Não.");
  return 0;
  }
}
