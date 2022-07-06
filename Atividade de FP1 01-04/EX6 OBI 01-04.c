//Atividade de Linguagem C 01/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX6
#include <stdio.h>
#include <math.h>
int main (void)
{
int x, y;

printf("Determine a coordenada na bola na semi-quadra (432,468): ");
  scanf("%d %d", &x, &y);

if (x>=0 && x<=432 && y==0)
  {
  printf("A bola bateu na rede: f");
  return 0;
  }

else if(y<=0)
  {
  printf("A bola caiu dentro da sua área: f");
  return 0;
  }

else if (x==0 && y>0 || x>=0 && y==468 || x==432 && y>0)
  {
  printf("A bola caiu na linha: d");
  return 0;
  }

else if (x>0 && x<432 && y>0 && y<468)
  {
  printf("A bola caiu dentro da quadra: d");
  return 0;
  }

else
  {
  printf("A bola caiu fora da quadra: f");
  return 0;
  }
}

