//Atividade de Linguagem C 25/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX5
#include <stdio.h>
int main()
{
int i1;
int i2;
float rest;

printf("Adicione um dividendo: ");
scanf("%d", &i1);
printf("Adicione um divisor: ");
scanf("%d", &i2);

rest = (float)i1/i2;
printf("O quociente �: %f", rest);
return 0;
//Divis�o de i1=10 e i2= 5 � igual a 2.
//Divis�o de i1=12 e i2= 5 � igual a 2.
//A diferen�a entre as vari�veis i1= 10 e i1= 12 � que na primeira op��o, o resultado � exato, enquanto no segunda, a resposta � aproximada.
}
