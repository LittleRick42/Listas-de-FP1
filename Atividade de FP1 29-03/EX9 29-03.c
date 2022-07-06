//Atividade de Linguagem C 29/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX9
#include <stdio.h>
#include <time.h>
int main ()
{
int diaN, mesN, anoN;
int a, b, c, d, dia_semana;

printf("Digite a data de nascimento (dd mm aaaa): ");
  scanf("%d %d %d", &diaN, &mesN, &anoN);

if ("%d" <= 0)
  {
  printf("Essa data não existe");
  return 0;
  }

else if (diaN> 31)
  {
  printf("Essa data não existe");
  return 0;
  }

else if (mesN > 12)
  {
  printf("Essa data não existe");
  return 0;
  }

else
  {
  if (mesN == 1)
    b = mesN+12;
  else if (mesN == 2)
    b = mesN+12;
  else
    b = mesN;

  c = anoN % 100;
  d = anoN/100;
  dia_semana = (diaN+(((b+1)*26)/10)+c+c/4+d/4+d*5) % 7;

  if (dia_semana == 0)
    printf("A pessoa nasceu durante um sábado!");
  if (dia_semana == 1)
    printf("A pessoa nasceu durante um domingo!");
  if (dia_semana == 2)
    printf("A pessoa nasceu durante uma segunda-feira!");
  if (dia_semana == 3)
    printf("A pessoa nasceu durante uma terça-feira!");
  if (dia_semana == 4)
    printf("A pessoa nasceu durante uma quarta-feira!");
  if (dia_semana == 5)
    printf("A pessoa nasceu durante uma quinta-feira!");
  if (dia_semana == 6)
    printf("A pessoa nasceu durante uma sexta-feira!");
  return 0;
  }
}
