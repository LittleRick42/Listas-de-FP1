//Atividade de Linguagem C 29/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX7
#include <stdio.h>
#include <time.h>
int main ()
{
float x, y, eixo_x, eixo_y, origem, Q1, Q2, Q3, Q4;

printf("Digite a coordenada do eixo X e do eixo Y: ");
scanf("%f %f", &x, &y);

if (y==0)
  {
    if (x!=0)
    {
      printf("Essas coordenadas (%.1f , %.1f) te levam para o eixo X no plano cartesiano.", x, y);
    }
    if (x==0)
    {
      printf("Essas coordenadas (%.1f , %.1f) te levam para a origem no plano cartesiano.", x, y);
    }
  }

else if (x==0)
  {
    if (y!=0)
    {
      printf("Essas coordenadas (%.1f , %.1f) te levam para o eixo Y no plano cartesiano.", x, y);
    }
  }

else if (x>0)
  {
    if (y>0)
    {
      printf("Essas coordenadas (%.1f , %.1f) te levam para o 1° quadrante no plano cartesiano.", x, y);
    }
    if(y<0)
    {
    printf("Essas coordenadas (%.1f , %.1f) te levam para o 4° quadrante no plano cartesiano.", x, y);
    }
  }

else if (x<0)
  {
    if (y>0)
    {
      printf("Essas coordenadas (%.1f , %.1f) te levam para o 2° quadrante no plano cartesiano.", x, y);
    }
    if(y<0)
    {
    printf("Essas coordenadas (%.1f , %.1f) te levam para o 3° quadrante no plano cartesiano.", x, y);
    }
  }
return 0;
}
