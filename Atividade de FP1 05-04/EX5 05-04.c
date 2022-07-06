//Atividade de Linguagem C 05/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX5

#include <stdio.h>

int main(void)
{
int i, numero, perfeito=0;

printf("Digite um número inteiro e veja se ele é um número perfeito: ");
  scanf("%d", &numero);

for(i=1; i<=numero/2; i++)
  if (numero%i==0)
    perfeito += i;

if (numero==perfeito)
  printf("O número %d é perfeito\n", numero);
else
  printf("O número %d não é perfeito\n", numero);

printf("A soma deu: %d", perfeito);
return 0;
}
