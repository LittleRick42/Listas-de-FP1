//Atividade de Linguagem C 05/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX5

#include <stdio.h>

int main(void)
{
int i, numero, perfeito=0;

printf("Digite um n�mero inteiro e veja se ele � um n�mero perfeito: ");
  scanf("%d", &numero);

for(i=1; i<=numero/2; i++)
  if (numero%i==0)
    perfeito += i;

if (numero==perfeito)
  printf("O n�mero %d � perfeito\n", numero);
else
  printf("O n�mero %d n�o � perfeito\n", numero);

printf("A soma deu: %d", perfeito);
return 0;
}
