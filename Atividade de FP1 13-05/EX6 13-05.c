//Atividade de Linguagem C 13/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define TAMANHO 5

//EX6
void cria_cartela(int matriz[TAMANHO][TAMANHO], int lin, int col);
int ja_esta_na_cartela(int matriz[TAMANHO][TAMANHO], int lin, int col, int elemento);
void imprime_cartela(int matriz[TAMANHO][TAMANHO], int lin, int col);

int main(void)
{
    int cartela[TAMANHO][TAMANHO];
    srand(time(NULL));

    cria_cartela(cartela, TAMANHO, TAMANHO);

    printf("Cartela gerada:\n");
    imprime_cartela(cartela, TAMANHO, TAMANHO);
    return 0;
}

void cria_cartela(int matriz[TAMANHO][TAMANHO], int lin, int col)
{
    int n_gerado;

    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
        {
            n_gerado = rand() % 100;
            while (ja_esta_na_cartela(matriz, i, col, n_gerado))
                n_gerado = rand() % 100;

            matriz[i][j] = n_gerado;
        }
}

int ja_esta_na_cartela(int matriz[TAMANHO][TAMANHO], int lin_atual, int col, int elemento)
{
    for (int i = 0; i <= lin_atual; i++)
        for (int j = 0; j < col; j++)
            if (matriz[i][j] == elemento)
                return 1;


    return 0;
}

void imprime_cartela(int matriz[TAMANHO][TAMANHO], int lin, int col)
{
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%3d ", matriz[i][j]);

        printf("\n");
    }
}
