//Atividade de Linguagem C 03/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EX4
int calculaDigitoVerificador(int num);
int main(void)
{
  int numero=0, digito_verificador;
  while(numero<=99 || numero>=1000)
  {
    printf("Digite um n�mero de 3 d�gitos: ");
      scanf("%d", &numero);
  }
  digito_verificador = calculaDigitoVerificador(numero);
  printf("O d�gito verificador �: %d", digito_verificador);
}

int calculaDigitoVerificador(int num)
{
  int centena = num / 100,
  dezena = (num / 10) % 10,
  unidade = num % 10;
  int digito_verificador = ((centena * 1 + dezena * 2 + unidade * 3) % 11) % 10;
  return digito_verificador;
}
