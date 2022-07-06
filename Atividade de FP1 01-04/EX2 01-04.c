//Atividade de Linguagem C 01/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX2
#include <stdio.h>
#include <math.h>
int main (void)
{
int n1, n2, n3;
char media;
float total;

printf("Digite três números inteiros: ");
  scanf("%d %d %d", &n1, &n2, &n3);

printf("Indique a operação de média que será aplicada: ");
  scanf(" %c", &media);

if (media=='A' || media=='a')
  {
  total= (n1+n2+n3)/3.;
  printf("A média aritmética equivale a %f", total);
  return 0;
  }

else if (media=='P' || media=='p')
  {
  total= (n1*1+n2*2+n3*3)/6.;
  printf("A média ponderada com pesos 1,2,3 equivale a %f", total);
  return 0;
  }

else if (media=='G' || media=='g')
  {
  total= pow(n1*n2*n3, 1/3.);
  printf("A média geométrica equivale a %f", total);
  return 0;
  }

else if (media=='H' || media=='h')
  {
  total= 3./(1/n1+1/n2+1/n3);
  printf("A média harmônica equivale a %f", total);
  return 0;
  }

else
  {
  printf("Essa operação não existe.");
  return 0;
  }
}
