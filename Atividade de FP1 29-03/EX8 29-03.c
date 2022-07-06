//Atividade de Linguagem C 29/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX8
#include <stdio.h>
#include <time.h>
int main ()
{
int diaN, diaH, mesN, mesH, anoN, anoH, idade;

printf("Digite a data de nascimento (dd mm aaaa): ");
  scanf("%d %d %d", &diaN, &mesN, &anoN);
printf("Digite a data de hoje (dd mm aaaa): ");
  scanf("%d %d %d", &diaH, &mesH, &anoH);

idade = anoH-anoN-1;

if (diaN > 31)
  printf("Essa data não existe");

else if (diaH > 31)
  printf("Essa data não existe");

else if (mesN > 12)
  printf("Essa data não existe");

else if (mesH > 12)
  printf("Essa data não existe");

else if (mesH-mesN < 0)
  printf("A pessoa possui %d anos de idade.", idade);

if (mesH-mesN == 0)
  {
  if (diaH-diaN >= 0)
  printf("A pessoa possui %d anos de idade.", idade+1);
  else
  printf("A pessoa possui %d anos de idade.", idade);
  }

else
  printf("A pessoa possui %d anos de idade.", idade+1);

return 0;
}
