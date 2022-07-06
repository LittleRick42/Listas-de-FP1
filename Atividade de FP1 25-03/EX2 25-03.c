//Atividade de Linguagem C 25/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX2
# include <stdio.h>
int main ()
{
float n1,n2,soma;

printf("Digite o primeiro valor: ");
scanf("%f", &n1);
printf("Digite o segundo valor: ");
scanf("%f", &n2);

soma = n1+n2;
printf("Valor: %f", soma);
return 0;
}
