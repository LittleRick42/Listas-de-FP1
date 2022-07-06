//Atividade de Linguagem C 29/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX1
#include <stdio.h>
#include <time.h>
int main ()
{
int alunos, monitores, total;

printf("Digite o número de alunos que vão para a excursão: ");
  scanf("%d", &alunos);
printf("Digite o número de monitores que vão para a excursão: ");
  scanf("%d", &monitores);

total = alunos+monitores;

if (alunos<0)
  {
  printf("Algum desses números não existem.");
  return 0;
  }

else if (monitores<0)
  {
  printf("Algum desses números não existem.");
  return 0;
  }

else if (total==0)
  {
  printf("Ninguém está indo no bondinho.");
  return 0;
  }

else if (total>50)
  {
  printf("Não há espaço suficiente para as %d pessoas.", total);
  return 0;
  }

else
  {
  printf("Todos as %d pessoas podem entrar no bondinho.", total);
  return 0;
  }
}
