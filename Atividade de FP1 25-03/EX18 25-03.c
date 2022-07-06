//Atividade de Linguagem C 25/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX18
#include <stdio.h>
int main()
{
int distancia, pedagio;
float litros_comb, valor_comb, tt_pedagio, total;

int media = 15, valor_pedagio = 8;
float gasolina = 2.6;

printf("Digite a distância entre duas cidades: ");
scanf("%d", &distancia);
printf("Digite o número de estágio durante a estrada: ");
scanf("%d", &pedagio);

litros_comb = distancia/media;
valor_comb = litros_comb*gasolina;
tt_pedagio = pedagio*valor_pedagio;
total = tt_pedagio+valor_comb;

printf("\nSerá gasto em cada setor:\nR$%0.2f em gasolina,\nR$%0.2f em pedágio,\nTotal: R$%0.2f", valor_comb, tt_pedagio, total);
return 0;
}

