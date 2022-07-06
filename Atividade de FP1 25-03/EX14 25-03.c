//Atividade de Linguagem C 25/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX14
#include <stdio.h>
int main()
{
int n50,n5,n1;
int resto1, resto2, total;

printf("Digite um valor: ");
scanf("%d", &total);

n50 = total/50;
resto1 = total-n50*50;

n5 = resto1/5;
resto2= resto1-n5*5;

n1 = resto2;

printf("Este é o número necessário de cada nota:\n%d notas de R$50\n%d notas de R$5\n%d notas de R$1", n50, n5, n1);
return 0;
}

