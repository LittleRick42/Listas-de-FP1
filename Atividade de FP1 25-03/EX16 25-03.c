//Atividade de Linguagem C 25/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX16
#include <stdio.h>
int main()
{
int valor, ultimo;

printf("Digite qualquer n�mero: ");
scanf("%d", &valor);

ultimo = valor %10;

printf("Este � o seu ultimo d�gito: %d", ultimo);
return 0;
}
