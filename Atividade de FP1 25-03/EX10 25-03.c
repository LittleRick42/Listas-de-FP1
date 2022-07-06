//Atividade de Linguagem C 25/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX10
#include <stdio.h>
int main()
{
float PI, raio, volume;

PI = 3.14159;
printf("Digite um valor para o raio do esfera: ");
scanf("%f", &raio);

volume = (4*PI*(raio*raio*raio))/3;
printf("O volume da esfera é: %f", volume);
return 0;
}
