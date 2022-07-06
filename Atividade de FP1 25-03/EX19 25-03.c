//Atividade de Linguagem C 25/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX19
#include <stdio.h>
int main()
{
float nt1, nt2, nt3, media;

printf("Adicione o valor da primeira nota: ");
scanf("%f", &nt1);
printf("Adicione o valor da segunda nota: ");
scanf("%f", &nt2);
printf("Adicione o valor da terceira nota: ");
scanf("%f", &nt3);

media =((2*nt1)+(3*nt2)+(5*nt3))/10;
printf("Esta é média das notas com seus pesos: %0.1f", media);
return 0;
}
