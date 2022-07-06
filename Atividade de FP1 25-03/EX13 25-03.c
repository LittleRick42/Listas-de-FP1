//Atividade de Linguagem C 25/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX13
#include <stdio.h>
int main()
{
float distancia, consumo, media;

printf("Digite a distância percorrida: ");
scanf("%f", &distancia);
printf("Digite o consumo de combustível: ");
scanf("%f", &consumo);

media = distancia/consumo;
printf("Este é o consumo médio de combustível: %0.3f km/l", media);
return 0;
}

