//Atividade de Linguagem C 01/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX1
#include <stdio.h>
#include <math.h>
int main (void)
{
int ano;
char acdc;

printf("Adicione um ano qualquer: ");
scanf("%d", &ano);

if (ano<0)
    acdc = 'a';

else
    acdc = 'd';

ano= abs(ano);

if (ano%400==0 || (ano%4==0 && ano%100!=0))
    printf("O ano de %d%c.C � bissexto!", ano, acdc);
else
    printf("O ano de %d%c.C n�o � bissexto!", ano, acdc);

return 0;
}
