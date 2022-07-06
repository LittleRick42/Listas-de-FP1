//Atividade de Linguagem C 03/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EX9
//b)
void imprimeMsgIMC(float imc);
int main(void)
{
  float imc;
  printf("Digite o IMC: ");
    scanf("%f", &imc);
  imprimeMsgIMC(imc);
  return 0;
}

void imprimeMsgIMC(float imc)
{
  if(imc<18.5)
    printf("Abaixo do Peso!");
  else if(imc<25)
    printf("Peso Normal!");
  else if(imc<30)
    printf("Acima do Peso!");
  else
    printf("Obeso!");
  return;
}
