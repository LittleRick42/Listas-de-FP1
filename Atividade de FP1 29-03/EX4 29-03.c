//Atividade de Linguagem C 29/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX4
#include <stdio.h>
#include <time.h>
int main ()
{
int lado, altura, area, perimetro;

printf("Insira o valor do lado e da altura do ret�ngulo: ");
scanf("%d %d", &lado, &altura);

area = lado*altura;
perimetro = 2*lado+2*altura;

if (area>perimetro)
  {
  printf("Um ret�ngulo %dx%d possui uma �rea maior, de %d, enquanto o per�metro equivale a %d.", lado, altura, area, perimetro);
  }

else if (area==perimetro)
  {
  printf("Um ret�ngulo %dx%d possui uma �rea e um per�metro iguais, ambos valendo %d.", lado, altura, area);
  }

else
  {
  printf("Um ret�ngulo %dx%d possui uma �rea menor, de %d, enquanto o per�metro equivale a %d.", lado, altura, area, perimetro);
  }
return 0;
}
