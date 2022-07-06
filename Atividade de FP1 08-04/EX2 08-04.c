//Atividade de Linguagem C 08/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX2

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
int i=0;
float valor, media=0;

printf("Digite o primeiro valor (para cancelar a contagem, digite -1000): ");
  scanf("%f", &valor);

while (valor!=-1000)
  {
    if (valor>=0)
    {
      i++;
      media+=valor;
      printf("Digite qualquer valor: ");
        scanf("%f", &valor);
    }
    else
    {
      printf("Digite qualquer valor: ");
        scanf("%f", &valor);
    }
  }

if (media==0)
  printf("Esta é média dos %d números positivos: %.1f", i, media);

else
  {
  media=media/i;
  printf("\nEsta é média dos %d números positivos: %.1f", i, media);
  }
return 0;
}
