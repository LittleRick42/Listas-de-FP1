//Atividade de Linguagem C 03/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EX6
//a)
int retornaResto(int alexandre, int maria, int rafael);
int main(void)
{
  int alexandre_n1, maria_n2, rafael_n3, resto;
  printf("Digite um número que será escolhido por Alexandre: ");
    scanf("%d", &alexandre_n1);
  printf("Digite um número que será escolhido por Maria: ");
    scanf("%d", &maria_n2);
  printf("Digite um número que será escolhido por Rafael: ");
    scanf("%d", &rafael_n3);
  resto = retornaResto(alexandre_n1, maria_n2, rafael_n3);
  printf("O resto dos números digitados foi %d. ", resto);
  return 0;
}

int retornaResto(int alexandre, int maria, int rafael)
{
  int resto = (alexandre + maria + rafael)%3;
  if (resto==0)
    return 0;
  else if (resto==1)
    return 1;
  else
    return 2;
}
