//Atividade de Linguagem C 05/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX4

#include <stdio.h>

#define PESO1 2
#define PESO2 3
#define PESO3 5
#define DIVISOR 10

int main(void)
{
int i, nm_casos;
float nm1, nm2, nm3, media;

printf("Digite o n�mero de testes de m�dia a serem feitos: ");
  scanf("%d", &nm_casos);

for(i=1; i<=nm_casos; i++)
  {
   printf ("\nDigite o valor dos tr�s valores: ");
     scanf("%f %f %f", &nm1, &nm2, &nm3);

   media = (nm1*PESO1+nm2*PESO2+nm3*PESO3)/DIVISOR;
   printf ("Esta � a m�dia ponderada: %.1f\n\n", media);
  }
return 0;
}
