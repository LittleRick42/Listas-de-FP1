//Atividade de Linguagem C 17/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Lista de Matrizes
//EX9
void alocaVetor (int*  m_resultado, int alunos, int perguntas, int alternativas);
void alocaMatriz (char** matriz, int alunos, int perguntas, int alternativas);
void verificaMatriz (char** m_correcao, int* m_resultado, int alunos, int perguntas);
void imprimeMatriz(char** matriz, int* m_resultado, int alunos, int perguntas);
int main(void)
{
  char** m_gabarito;
  int* m_resultado;
  int alunos=0, alternativas=0, perguntas=0;
  srand(time(NULL));
  while(alunos<=0)
  {
    printf("Digite o número de alunos na sala: ");
    scanf("%d", &alunos);
  }
  while(perguntas<=0)
  {
    printf("Digite o número de perguntas que há na prova: ");
    scanf("%d", &perguntas);
  }
  while(alternativas<=0)
  {
    printf("Digite o número de alternativas em cada questão: ");
    scanf("%d", &alternativas);
  }
  printf("Resultado das respostas de cada aluno:\n\n");
  alocaVetor (m_resultado, alunos, perguntas, alternativas);
  alocaMatriz (m_gabarito, alunos, perguntas, alternativas);
  verificaMatriz(m_gabarito, m_resultado, alunos, perguntas);
  imprimeMatriz(m_gabarito, m_resultado, alunos, perguntas);
  free(m_gabarito);
  free(m_resultado);
  return 0;
}

void alocaVetor(int* m_resultado, int alunos, int perguntas, int alternativas)
{
  m_resultado = (int*) malloc (alunos*sizeof(int));
  return;
}

void alocaMatriz(char** matriz, int alunos, int perguntas, int alternativas)
{
  matriz = (char**) malloc ((alunos+1)*sizeof(char*));
  for(int h=0; h<=alunos; h++)
  {
    matriz[h] = (char*) malloc (perguntas*sizeof(char));
  }
  for(int i=0; i<=alunos; i++)
  {
    for(int j=0; j<perguntas; j++)
    {
      matriz[i][j] = rand()%alternativas+97;
    }
  }
  return;
}

void verificaMatriz(char** m_correcao, int* m_resultado, int alunos, int perguntas)
{
  int acertos=0;
  for(int i=0; i<alunos; i++)
  {
    for(int j=0; j<perguntas; j++)
    {
      if(m_correcao[i][j]==m_correcao[alunos][j])
        acertos++;
    }
    m_resultado[i] = acertos;
    acertos = 0;
  }
  return;
}

void imprimeMatriz(char** matriz, int* m_resultado, int alunos, int perguntas)
{
  for(int i=0; i<=alunos; i++)
  {
    if(i==alunos)
          printf("Gabarito:\n");
        else
        {
          printf("Aluno %d:\n", i+1);
        }
    for(int j=0; j<perguntas; j++)
    {
      if(i==alunos)
        printf("%c / ", matriz[perguntas][j]);
      else
        printf("%c / ", matriz[i][j]);
    }
    if(i!=alunos)
      printf("\nAcertos: %d\n\n\n", m_resultado[i]);
  }
  return;
}
