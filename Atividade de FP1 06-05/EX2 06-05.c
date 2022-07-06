//Atividade de Linguagem C 06/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EX2
int calcula_raizes(float a, float b, float c, float *x1, float *x2);
int main(void)
{
    int a, b, c, raizes_reais;
    float x1=0, x2=0;
    printf("Digite os valores da função quadrática: ");
        scanf("%d %d %d", &a, &b, &c);
    raizes_reais = calcula_raizes(a, b, c, &x1, &x2);
    printf("A função possui %d raízes reais!\n", raizes_reais);
    printf("%dx²+%dx+%d=\nx1=%.2f \nx2=%.2f", a, b, c, x1, x2);
}

int calcula_raizes(float a, float b, float c, float *x1, float *x2)
{
    int nmraizes;
    float delta;
    delta= pow(b, 2)-4*a*c;
    printf("%f\n", delta);
    if(delta<0)
        nmraizes=0;
    else
    {
    if(delta==0)
        nmraizes=1;
    else
        nmraizes=2;
    *x1= (-b+sqrt(delta))/(2*a);
    *x2= (-b-sqrt(delta))/(2*a);
    }
    return nmraizes;
}
