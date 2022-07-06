//Atividade de Linguagem C 25/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX15
#include <stdio.h>
int main()
{
int dia, hora, minuto, segundo;
int resto1, resto2, resto3, total;

printf("Digite um valor em segundos: ");
scanf("%d", &total);

dia = total/86400;
resto1 = total-dia*86400;

hora = resto1/3600;
resto2= resto1-hora*3600;

minuto = resto2/60;
resto3= resto2-minuto*60;

segundo = resto3;

printf("O valor em segundos é o equivalente a:\n%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)", dia, hora, minuto, segundo);
return 0;
}

