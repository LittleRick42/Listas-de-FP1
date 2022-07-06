//Atividade de Linguagem C 12/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX8

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
int i, numero, reservam1=0, reservam2=0;

printf("Digite um número: ");
  scanf("%d", &numero);
numero = abs(numero);

if(numero<10)
printf("Não há digitos suficientes para a comparação.");

else if(numero>=10)
  {
  for(i=10;i<=numero; i*=10)
    {
      reservam1=((numero/i+reservam1+abs(numero/i-reservam1))/2);
      reservam2=((numero%i+reservam2+abs(numero%i-reservam2))/2);
    }
  if(reservam1==reservam2)
  printf("Os dígitos desse número são todos iguais!");
  else
  printf("Os dígitos desse número não são todos iguais.");
  }
return 0;
}
