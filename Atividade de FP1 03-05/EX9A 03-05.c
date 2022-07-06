//Atividade de Linguagem C 03/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EX9
//a)
float calculaIMC(float altura, float peso);
int main(void)
{
  float altura, peso, imc;
  printf("Para calcular o Índice de Massa Corporal (IMC).\n");
  printf("Digite a altura: ");
    scanf("%f", &altura);
  printf("Digite o peso: ");
    scanf("%f", &peso);
  imc = calculaIMC(altura, peso);
  printf("O IMC equivale a: %.2f", imc);
  return 0;
}

float calculaIMC(float altura, float peso)
{
  float imc = peso / pow(altura, 2);
  return imc;
}
