//Atividade de Linguagem C 01/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX3
#include <stdio.h>
#include <math.h>
int main (void)
{
int centena, dezena, unidade, numero, total;

printf("Digite um n�mero entre 100 e 999: ");
    scanf("%d", &numero);

if (numero<100 || numero>999)
  {
  printf("N�o foi este o n�mero requerido.");
  return 0;
  }

else
centena = numero/100;
dezena = (numero/10)%10;
unidade = numero%10;

total = pow(centena,3)+pow(dezena,3)+pow(unidade,3);
if (total == numero)
  printf("O n�mero %d � o n�mero de Armstrong!\nO total equivale a %d", numero,total);

else
  printf("O n�mero %d n�o � o n�mero de Armstrong!\nO total equivale a %d", numero, total);

return 0;
}
