//Atividade de Linguagem C 29/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX6
#include <stdio.h>
#include <time.h>
#include <math.h>
int main ()
{
float a, b, c;
float delta, complexo, i1, i2, x1, x2;

printf("Adicione os n�meros de uma fun��o quadr�tica: ");
scanf("%f %f %f", &a, &b, &c);

printf("A equa��o apresentada �: %1.0fx�+%1.0fx+%1.0f=0\n", a, b, c);
delta = b*b-4*a*c;

if (delta<0)
  {
  complexo = abs(delta);
  x1 = (-b)/2*a;
  x2 = (-b)/2*a;
  i1 = (sqrt(complexo))/2*a;
  i2 = (-sqrt(complexo))/2*a;
  printf("O valor das ra�zes s�o:\nx1= %.2f+%.2fi e x2= %.2f+%.2fi", x1, i1, x2, i2);
  }

else if (delta==0)
  {
  complexo, i1, i2, x2 = 0;
  x1 = (-b+sqrt(delta))/2*a;
  printf("O valor das ra�zes s�o iguais:\nx1 e x2= %.2f", x1);
  }

else
  {
  complexo, i1, i2 = 0;
  x1 = (-b+sqrt(delta))/2*a;
  x2 = (-b-sqrt(delta))/2*a;
  printf("O valor das ra�zes s�o:\nx1= %.2f e x2= %.2f", x1, x2);
  }
return 0;
}
