//Atividade de Linguagem C 25/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX17
#include <stdio.h>
int main()
{
int celsius, farenheit;

printf("Digite qualquer termperatura em celsius: ");
scanf("%d", &celsius);

farenheit = celsius*1.8+32;
printf("A temperatura é equivalente a: %d°F", farenheit);
return 0;
}

