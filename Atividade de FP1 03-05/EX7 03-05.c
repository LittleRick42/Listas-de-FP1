//Atividade de Linguagem C 03/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EX7
int dec2bin(int dec);
int bin2dec(int bin);

int main(void)
{
    int opcao, num, resultado = 0;

    do
    {
        printf("Digite o numero a ser convertido: ");
        scanf("%d", &num);

        printf("Digite a opcão desejada:\n");
        printf("(1) Converter de binário para decimal\n");
        printf("(2) Converter de decimal para binário\n");
        printf("(0) Sair do programa\n");
        scanf("%d", &opcao);


        if (opcao == 1)
            resultado = bin2dec(num);

        else if (opcao == 2)
            resultado = dec2bin(num);

        printf("Resultado da conversão: %d\n\n", resultado);

    } while (opcao != 0);

    return 0;
}

int bin2dec(int bin)
{
    int resultado = 0;
    for (int i = 0; bin > 0; bin /= 10, i++)
        resultado += (bin % 10 * pow(2, i));

    return resultado;

}

int dec2bin(int dec)
{
    int resultado = 0, aux = dec, n_repeticoes;
    for (n_repeticoes = 0; aux > 0; n_repeticoes++, aux /=2);
    for (int n = n_repeticoes; dec > 0; n--)
        if (dec >= pow(2, n))
            resultado += pow(10, n),
            dec -= pow(2, n);

    return resultado;
}
