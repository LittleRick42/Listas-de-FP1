//Atividade de Linguagem C 12/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX4

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
int i, j, n;

printf("Digite o número de linhas na tabela: ");
  scanf("%d", &n);

if (n<=0)
printf("O número precisa ser maior que 0.");

else
  {
    for(i=1; i<=n; i++)
    {
      printf("%d ", i);
      for(j=1; j<=i; j++)
      {
        printf("%d ", i*j);
      }
      printf("\n");
    }
  }
return 0;
}
