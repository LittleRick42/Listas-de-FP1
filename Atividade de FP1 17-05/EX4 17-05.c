//Atividade de Linguagem C 17/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//EX4
int alocaVetor(char* cidades);
int alocaMatriz(int** matriz_preco);
int custo_cidades (char* cidades, int n_cidades, int** m);
int main()
{
  int** matriz_preco;
  char* cidades;
  int n_cidades, numero, custo_total;
  numero = alocaVetor(cidades);
  n_cidades = alocaMatriz(matriz_preco);
  printf("Digite a ordem das cidades na qual serão visitadas(De %c até %c):\n", 65, 65+n_cidades);
  for(int i=0; i<numero; i++)
  {
      scanf(" %c ", &cidades[i]);
  }
  custo_total=custo_cidades(cidades, numero, matriz_preco);
  printf("O total de custo das cidades foi: %d", custo_total);
  free(cidades);
  cidades=NULL;
  for(int j=0; j<numero; j++)
  {
    free(matriz_preco[j]);
    matriz_preco[j]=NULL;
  }
  free(matriz_preco);
  matriz_preco=NULL;
  return 0;
}

int alocaVetor(char* cidades)
{
  int numero=0;
  while(numero<=0)
  {
    printf("Digite o número de cidades na qual serão visitadas: ");
    scanf("%d", &numero);
  }
  cidades = (char*) malloc (numero*sizeof(char));
  return numero;
}

int alocaMatriz(int** matriz_preco)
{
  int n_cidades=0;
  while(n_cidades<=0)
  {
  printf("Digite a quantidade de cidades: ");
    scanf("%d", &n_cidades);
  }
  matriz_preco = (int**) malloc (n_cidades*sizeof(int*));
  for(int a=0; a<n_cidades; a++)
  {
    matriz_preco[a] = (int*) malloc (n_cidades*sizeof(int));
  }

  for(int b=0; b<n_cidades; b++)
  {
    for(int c=0; c<n_cidades; c++)
    {
      if(b==c)
        matriz_preco[b][c]=0;
      else
      {
        printf("Digite o custo de ir da cidade %c até %c:", b+65, c+65);
        scanf("%d", &matriz_preco[b][c]);
      }
    }
  }
  return n_cidades;
}

int custo_cidades(char* cidades, int numero, int** m)
{
  int custo_total=0;
  for(int i=0; i<numero; i++)
  {
    custo_total+= m[cidades[i]][cidades[i+1]];
  }
  return custo_total;
}
