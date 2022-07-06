//Atividade de Linguagem C 25/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
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
printf("O quociente é: %f", rest);
return 0;
//Divisão de i1=10 e i2= 5 é igual a 2.
//Divisão de i1=12 e i2= 5 é igual a 2.
//A diferença entre as variáveis i1= 10 e i1= 12 é que na primeira opção, o resultado é exato, enquanto no segunda, a resposta é aproximada.
}
