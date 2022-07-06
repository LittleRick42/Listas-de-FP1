//Atividade de Linguagem C 05/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX2

#include <stdio.h>

int main(void)
{
int i, numero;

printf("Digite um valor inteiro: ");
  scanf("%d",&numero);
printf("Valores que divididos por %d possuem resto igual a 2:\n\n", numero);

for (i=1; i<101; i++)
  {
    if (i%numero==2)
        printf("%d, ", i);
  }
return 0;
}
