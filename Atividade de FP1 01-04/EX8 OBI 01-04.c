//Atividade de Linguagem C 01/04
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX8
#include <stdio.h>
#include <math.h>
int main (void)
{
int A, B, C, H, L;

printf("Digite, em centímetros, o comprimento, a largura e a altura da caixa do drone: ");
  scanf("%d %d %d", &A, &B, &C);
printf("Digite, em centímetros, a altura e a largura da janela: ");
  scanf("%d %d", &H, &L);

if (A<1 || A>100 || B<1 || B>100 || C<1 || C>100 || H<1 || H>100 || L<1 || L>100)
  {
  printf("Este tamanho de caixa não existe.");
  return 0;
  }

else
  {
  if (A<=H && B<=L || B<=H && A<=L || A<=H && C<=L || C<=H && A<=L || B<=H && C<=L || C<=H && B<=L)
    {
    printf("A caixa consegue passar pela janela? S");
    return 0;
    }
  else
    {
    printf("A caixa consegue passar pela janela? N");
    return 0;
    }
  }
}

