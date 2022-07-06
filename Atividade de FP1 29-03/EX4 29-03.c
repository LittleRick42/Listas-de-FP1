//Atividade de Linguagem C 29/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX4
#include <stdio.h>
#include <time.h>
int main ()
{
int lado, altura, area, perimetro;

printf("Insira o valor do lado e da altura do retângulo: ");
scanf("%d %d", &lado, &altura);

area = lado*altura;
perimetro = 2*lado+2*altura;

if (area>perimetro)
  {
  printf("Um retângulo %dx%d possui uma área maior, de %d, enquanto o perímetro equivale a %d.", lado, altura, area, perimetro);
  }

else if (area==perimetro)
  {
  printf("Um retângulo %dx%d possui uma área e um perímetro iguais, ambos valendo %d.", lado, altura, area);
  }

else
  {
  printf("Um retângulo %dx%d possui uma área menor, de %d, enquanto o perímetro equivale a %d.", lado, altura, area, perimetro);
  }
return 0;
}
