//Atividade de Linguagem C 08/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
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

printf("Adivinhe um número entre 0 e 500: ");
  scanf("%d", &nm1);
i++;

while (aleatorio!=nm1)
  {
  printf("Vish, você errou!\n");

  if (nm1<0)
    {
    printf("O número deveria ser natural.\n\n");
    printf("Adivinhe um número entre 0 e 500: ");
      scanf("%d", &nm1);
    i++;
    }
  else if (nm1<aleatorio)
    {
    printf("Seu chute foi um número menor que o requerido\n\n");
    printf("Adivinhe um número entre 0 e 500: ");
      scanf("%d", &nm1);
    i++;
    }
  else if (nm1>aleatorio)
    {
    printf("Seu chute foi um número maior que o requerido\n\n");
    printf("Adivinhe novamente um número entre 0 e 500: ");
      scanf("%d", &nm1);
    i++;
    }
  }
printf("Parabéns! Você acertou!\n\n");

if (i<=3)
  printf("Você demorou %d tentativas.\nClassificação: \o/ ", i);

else if (i>=4 && i<=6)
  printf("Você demorou %d tentativas.\nClassificação: :-D ", i);

else if (i>=7 && i<=10)
  printf("Você demorou %d tentativas.\nClassificação: :-) ", i);

else
  printf("Você demorou %d tentativas.\nClassificação: :-/ ", i);
return 0;
}
