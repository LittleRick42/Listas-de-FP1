//Atividade de Linguagem C 25/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX13
#include <stdio.h>
int main()
{
float distancia, consumo, media;

printf("Digite a dist�ncia percorrida: ");
scanf("%f", &distancia);
printf("Digite o consumo de combust�vel: ");
scanf("%f", &consumo);

media = distancia/consumo;
printf("Este � o consumo m�dio de combust�vel: %0.3f km/l", media);
return 0;
}

