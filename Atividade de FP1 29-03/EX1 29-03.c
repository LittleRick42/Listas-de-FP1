//Atividade de Linguagem C 29/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o
//EX1
#include <stdio.h>
#include <time.h>
int main ()
{
int alunos, monitores, total;

printf("Digite o n�mero de alunos que v�o para a excurs�o: ");
  scanf("%d", &alunos);
printf("Digite o n�mero de monitores que v�o para a excurs�o: ");
  scanf("%d", &monitores);

total = alunos+monitores;

if (alunos<0)
  {
  printf("Algum desses n�meros n�o existem.");
  return 0;
  }

else if (monitores<0)
  {
  printf("Algum desses n�meros n�o existem.");
  return 0;
  }

else if (total==0)
  {
  printf("Ningu�m est� indo no bondinho.");
  return 0;
  }

else if (total>50)
  {
  printf("N�o h� espa�o suficiente para as %d pessoas.", total);
  return 0;
  }

else
  {
  printf("Todos as %d pessoas podem entrar no bondinho.", total);
  return 0;
  }
}
