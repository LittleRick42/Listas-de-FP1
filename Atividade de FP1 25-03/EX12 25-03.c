//Atividade de Linguagem C 25/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX12
#include <stdio.h>
#include <stdlib.h>
int main()
{
int nm1, nm2, nm3, min1, min2;

printf("Digite um número inteiro: ");
scanf("%d", &nm1);
printf("Digite outro número inteiro: ");
scanf("%d", &nm2);
printf("Digite mais um número inteiro: ");
scanf("%d", &nm3);

min1= (nm1-nm2-abs(nm1+nm2))/2;
min2= (nm3-min1-abs(nm3+min1))/2;
printf("Este é o valor menor: %d", min2);
return 0;
}
