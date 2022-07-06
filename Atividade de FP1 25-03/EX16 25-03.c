//Atividade de Linguagem C 25/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX16
#include <stdio.h>
int main()
{
int valor, ultimo;

printf("Digite qualquer número: ");
scanf("%d", &valor);

ultimo = valor %10;

printf("Este é o seu ultimo dígito: %d", ultimo);
return 0;
}
