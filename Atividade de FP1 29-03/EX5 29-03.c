//Atividade de Linguagem C 29/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX5
#include <stdio.h>
#include <time.h>
int main ()
{
float a, b, c;
float delta, x1, x2;

printf("Adicione os n�meros de uma fun��o quadr�tica: ");
scanf("%f %f %f", &a, &b, &c);

printf("A equa��o apresentada �: %1.0fx�+%1.0fx+%1.0f=0\n", a, b, c);
delta = b*b-4*a*c;

if (delta<=0)
  {
  printf("Este n�mero n�o apresenta raiz real");
  }

else
  {
  x1 = (-b+sqrt(delta))/2*a;
  x2 = (-b-sqrt(delta))/2*a;
  printf("O valor das ra�zes s�o:\nx1= %.2f e x2= %.2f", x1, x2);
  }
return 0;
}
