//Atividade de Linguagem C 05/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX8

#include <stdio.h>

int main(void)
{
int i, milhar;

printf("N�meros especiais.\nExemplo: 3025 -> 30+25=55 -> 55*55=3025\n\n");
printf("Esses s�o os n�meros que possuem essa caracter�stca:\n");

for (i=1000;i<=9999;i++)
  {
    milhar = ((i/100)+(i%100))*((i/100)+(i%100));
    if (i==milhar)
      printf("%d, ", i);
  }
return 0;
}
