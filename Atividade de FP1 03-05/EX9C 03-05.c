//Atividade de Linguagem C 03/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EX9
//c)
float calculaIMC(float altura, float peso);
void imprimeMsgIMC(float imc);
int main(void)
{
  float altura, peso, imc;
  printf("Para calcular o Índice de Massa Corporal (IMC).\n");
  printf("Digite a altura: ");
    scanf("%f", &altura);
  printf("Digite o peso: ");
    scanf("%f", &peso);
  imc = calculaIMC(altura, peso);
  printf("O IMC equivale a %.2f.\n", imc);
  imprimeMsgIMC(imc);
  return 0;
}

float calculaIMC(float altura, float peso)
{
  float imc = peso / pow(altura, 2);
  return imc;
}

void imprimeMsgIMC(float imc)
{
  if(imc<18.5)
    printf("O IMC pode ser considerado: Abaixo do Peso!");
  else if(imc<25)
    printf("O IMC pode ser considerado: Peso Normal!");
  else if(imc<30)
    printf("O IMC pode ser considerado: Acima do Peso!");
  else
    printf("O IMC pode ser considerado: Obeso!");
  return;
}
