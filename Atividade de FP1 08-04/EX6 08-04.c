//Atividade de Linguagem C 08/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX6

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
int i=0, aleatorio, nm1;

srand(time(NULL));
aleatorio=rand()%500;

printf("Adivinhe um n�mero entre 0 e 500: ");
  scanf("%d", &nm1);
i++;

while (aleatorio!=nm1)
  {
  printf("Vish, voc� errou!\n");

  if (nm1<0)
    {
    printf("O n�mero deveria ser natural.\n\n");
    printf("Adivinhe um n�mero entre 0 e 500: ");
      scanf("%d", &nm1);
    i++;
    }
  else if (nm1<aleatorio)
    {
    printf("Seu chute foi um n�mero menor que o requerido\n\n");
    printf("Adivinhe um n�mero entre 0 e 500: ");
      scanf("%d", &nm1);
    i++;
    }
  else if (nm1>aleatorio)
    {
    printf("Seu chute foi um n�mero maior que o requerido\n\n");
    printf("Adivinhe novamente um n�mero entre 0 e 500: ");
      scanf("%d", &nm1);
    i++;
    }
  }
printf("Parab�ns! Voc� acertou!\n\n");

if (i<=3)
  printf("Voc� demorou %d tentativas.\nClassifica��o: \o/ ", i);

else if (i>=4 && i<=6)
  printf("Voc� demorou %d tentativas.\nClassifica��o: :-D ", i);

else if (i>=7 && i<=10)
  printf("Voc� demorou %d tentativas.\nClassifica��o: :-) ", i);

else
  printf("Voc� demorou %d tentativas.\nClassifica��o: :-/ ", i);
return 0;
}
