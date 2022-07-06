//Atividade de Linguagem C 25/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX6
#include <stdio.h>
int main()
{
int n1;
int n2;
float media;

printf("Escolha um número inteiro: ");
scanf("%d", &n1);
printf("Escolha outro número inteiro: ");
scanf("%d", &n2);

media = (n1+n2)/2;
printf("Essa é a sua média: %f", media);
return 0;
//Média para n1=2 n2=4 é igual a 3
//Média para n1=2 n2=3 é igual a 2
}

