//Atividade de Linguagem C 08/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define SENHA 2002

int main(void)
{
int i=0, senha;

printf("Descubra a senha.\n");
printf("Digite uma senha de 4 algarismos: ");
    scanf("%d", &senha);
i++;

while (senha!=SENHA)
    {
        printf("Senha inv�lida.\n\n");
        printf("Digite a senha de novamente: ");
        scanf("%d", &senha);
        i++;
    }
printf("Acesso permitido! Foi necess�io %d tentativas.", i);
return 0;
}
