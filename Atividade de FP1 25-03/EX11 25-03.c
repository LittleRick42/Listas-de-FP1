//Atividade de Linguagem C 25/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX11
#include <stdio.h>
#include <stdlib.h>
int main()
{
int nm1, nm2, nm3, max1, max2;

printf("Digite um n�mero inteiro: ");
scanf("%d", &nm1);
printf("Digite outro n�mero inteiro: ");
scanf("%d", &nm2);
printf("Digite mais um n�mero inteiro: ");
scanf("%d", &nm3);

max1= (nm1+nm2+abs(nm1-nm2))/2;
max2= (nm3+max1+abs(nm3-max1))/2;
printf("Este � o valor m�ximo: %d", max2);
return 0;
}
