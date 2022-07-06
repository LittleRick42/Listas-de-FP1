//Atividade de Linguagem C 13/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define ALUNOS 5
#define ALTERNATIVAS 5
#define PERGUNTAS 10

//EX9
void criaMatriz (char m_gabarito[][PERGUNTAS]);
void verificaMatriz (char m_gabarito[][PERGUNTAS], int m_resultado[ALUNOS]);
void imprimeMatriz(char matriz[][PERGUNTAS], int m_resultado[ALUNOS]);
int main(void)
{
  char m_gabarito[ALUNOS+1][PERGUNTAS];
  int m_resultado[ALUNOS];
  srand(time(NULL));
  printf("Resultado da respostas de cada aluno:\n\n");
  criaMatriz(m_gabarito);
  verificaMatriz(m_gabarito, m_resultado);
  imprimeMatriz(m_gabarito, m_resultado);
  return 0;
}

void criaMatriz(char matriz[][PERGUNTAS])
{
  for(int i=0; i<=ALUNOS; i++)
  {
    for(int j=0; j<PERGUNTAS; j++)
    {
      matriz[i][j] = rand()%ALTERNATIVAS+97; //65
    }
  }
  return;
}

void verificaMatriz(char m_correcao[][PERGUNTAS], int m_resultado[ALUNOS])
{
  int acertos=0;
  for(int i=0; i<ALUNOS; i++)
  {
    for(int j=0; j<PERGUNTAS; j++)
    {
      if(m_correcao[i][j]==m_correcao[ALUNOS][j])
        acertos++;
    }
    m_resultado[i] = acertos;
    acertos = 0;
  }
  return;
}

void imprimeMatriz(char matriz[][PERGUNTAS], int m_resultado[ALUNOS])
{
  for(int i=0; i<=ALUNOS; i++)
  {
    if(i==ALUNOS)
          printf("Gabarito:\n");
        else
        {
          printf("Aluno %d:\n", i+1);
        }
    for(int j=0; j<PERGUNTAS; j++)
    {
      if(i==ALUNOS)
        printf("%c / ", matriz[ALUNOS][j]);
      else
        printf("%c / ", matriz[i][j]);
    }
    if(i!=ALUNOS)
      printf("\nAcertos: %d\n\n\n", m_resultado[i]);
  }
  return;
}
