//Atividade de Linguagem C 03/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EX11
//a)
int contadigitos(int n, int d);
int main(void)
{
  int numero, digito=10, vezes_digitos;
  printf("Digite um número natural: ");
    scanf("%d", &numero);
  while(digito<0 || digito>9)
  {
  printf("Digite um único dígito: ");
    scanf("%d", &digito);
  }
  vezes_digitos = contadigitos(abs(numero), digito);
  printf("O dígito %d aparece %d vezes em %d.", digito, vezes_digitos, numero);
  return 0;
}

int contadigitos(int n, int d)
{
  int contador=0;
  for(int i=1; i<n; i*=10)
  {
    for(int j=10; j<=n; j*=10)
    {
      if((n/i)%j==d)
        contador++;
    }
  }
  return contador;
}
