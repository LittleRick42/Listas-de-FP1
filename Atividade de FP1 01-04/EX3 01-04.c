//Atividade de Linguagem C 01/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX3
#include <stdio.h>
#include <math.h>
int main (void)
{
int centena, dezena, unidade, numero, total;

printf("Digite um número entre 100 e 999: ");
    scanf("%d", &numero);

if (numero<100 || numero>999)
  {
  printf("Não foi este o número requerido.");
  return 0;
  }

else
centena = numero/100;
dezena = (numero/10)%10;
unidade = numero%10;

total = pow(centena,3)+pow(dezena,3)+pow(unidade,3);
if (total == numero)
  printf("O número %d é o número de Armstrong!\nO total equivale a %d", numero,total);

else
  printf("O número %d não é o número de Armstrong!\nO total equivale a %d", numero, total);

return 0;
}
