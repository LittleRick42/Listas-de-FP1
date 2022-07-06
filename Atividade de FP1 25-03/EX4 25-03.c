//Atividade de Linguagem C 25/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX4
# include <stdio.h>
int main ()
{
int trm1;
char crt2;
float qul3;

printf("Adicione um numero: ");
scanf("%d", &trm1);
printf("Adicione um caracter: ");
scanf(" %c", &crt2);
//É necessário adicionar um espaço antes do "&c" para o programa funcionar corretamente.

printf("Finalmente, adicione um número qualquer: ");
scanf("%f", &qul3);
printf("Veja seus valores finais: %d, %c, %f", trm1, crt2, qul3);
return 0;
}
