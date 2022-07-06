//Atividade de Linguagem C 05/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX1

#include <stdio.h>

int main(void)
{
int i, numero;

printf("Adicione um número inteiro: ");
  scanf("%d", &numero);
printf("A tabuada de %d vale:\n\n", numero);

for(i=1; i<=10; i++)
  {
    printf("A tabuada de %d*%d= %d\n", numero, i, numero*i);
  }
return 0;
}
