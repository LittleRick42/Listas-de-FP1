//Atividade de Linguagem C 12/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
int i, j, n, m;

printf("Digite o n�mero de linhas e colunas: ");
  scanf("%d %d", &n, &m);

if (n<=0)
printf("O n�mero precisa ser maior que 0.");

else
  {
    for (i=1; i<=n; i++)
      {
        printf("\n");
        for(j=1; j<=m; j++)
          {
           printf("%d ", (i*j));
          }
      }
    printf("\n\nFim da tabela.");
  }
return 0;
}
