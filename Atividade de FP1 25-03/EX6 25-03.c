//Atividade de Linguagem C 25/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX6
#include <stdio.h>
int main()
{
int n1;
int n2;
float media;

printf("Escolha um n�mero inteiro: ");
scanf("%d", &n1);
printf("Escolha outro n�mero inteiro: ");
scanf("%d", &n2);

media = (n1+n2)/2;
printf("Essa � a sua m�dia: %f", media);
return 0;
//M�dia para n1=2 n2=4 � igual a 3
//M�dia para n1=2 n2=3 � igual a 2
}

