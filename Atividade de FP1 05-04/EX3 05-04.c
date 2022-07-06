//Atividade de Linguagem C 05/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX3

#include <stdio.h>

int main(void)
{
int i, num1, num2, qimpar=0;

printf("Digite o primeiro valor: ");
  scanf("%d", &num1);
printf("Digite o segundo valor (precisa ser menor que o primeiro): ");
  scanf("%d", &num2);

if (num2>num1)
printf("O primeiro valor precisa ser o maior");

else
    {
    printf("\nEsses são os números ímpares entre esses números:\n");
    for (i=num2+1; i<num1; i++)
        {
        if (i%2==1)
            {
            printf("%d, ",i);
            qimpar++;
            }
        }
  printf("\n\nEssa é a quantidade de números ímpares entre esses números:\n%d número ímpares.", qimpar);
    }
return 0;
}
