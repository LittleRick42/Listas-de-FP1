//Atividade de Linguagem C 25/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX3
# include <stdio.h>
int main ()
{
char ltr1;
int nm2;
float dc3;

printf("Adicione um caracter: ");
scanf("%c", &ltr1);
printf("Adicione um n�mero inteiro: ");
scanf("%d", &nm2);
printf("Finalmente, adicione um n�mero qualquer: ");
scanf("%f", &dc3);
printf("Veja seus valores finais: %c, %d, %f", ltr1, nm2, dc3);
return 0;
}
