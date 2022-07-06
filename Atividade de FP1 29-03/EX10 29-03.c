//Atividade de Linguagem C 29/03
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informação
//EX10: Desafio
#include <stdio.h>
#include <time.h>
int main ()
{
int nm1, nm2, pergunta, resposta, operacao;
clock_t tempo_i, tempo_f, tempo;

srand(time(NULL));
nm1 = rand()%100 + 1;
nm2 = rand()%100 + 1;
operacao = rand() %5;
printf("Esses são seus números aleátorios: n1=%d, n2=%d\n", nm1, nm2);

if (operacao == 0)
  {
  pergunta = nm1+nm2;
  tempo_i = clock();
  tempo = time(NULL);
  printf("Descubra o resultado da operação aritmética: %d+%d=?\nResposta: ", nm1, nm2);
  scanf("%d", &resposta);
  tempo_f = clock() - tempo_i;
  }

else if (operacao == 1)
  {
  pergunta = nm1-nm2;
  tempo_i = clock();
  tempo = time(NULL);
  printf("Descubra o resultado da operação aritmética: %d-%d=?\nResposta: ", nm1, nm2);
  scanf("%d", &resposta);
  tempo_f = clock() - tempo_i;
  }

else if (operacao == 2)
  {
  pergunta = nm1*nm2;
  tempo_i = clock();
  tempo = time(NULL);
  printf("Descubra o resultado da operação aritmética: %d*%d=?\nResposta: ", nm1, nm2);
  scanf("%d", &resposta);
  tempo_f = clock() - tempo_i;
  }

else if (operacao == 3)
  {
  pergunta = nm1/nm2;
  tempo_i = clock();
  tempo = time(NULL);
  printf("Descubra o quociente da operação aritmética: %d/%d=?\nResposta: ", nm1, nm2);
  scanf("%d", &resposta);
  tempo_f = clock() - tempo_i;
  }

else
  {
  pergunta = nm1%nm2;
  tempo_i = clock();
  tempo = time(NULL);
  printf("Descubra o resto da operação aritmética: %d/%d=?\nResposta: ", nm1, nm2);
  scanf("%d", &resposta);
  tempo_f = clock() - tempo_i;
  }

if (resposta==pergunta)
  printf("\nBoa! Você acertou a resposta!\n\n");
else
  printf("\nVish, você errou, o resultado era: %d\n\n", pergunta);

printf("Este foi o seu tempo: %d\n", tempo_f);
printf("Este foi o seu tempo: %d\n", time(NULL)-tempo);

return 0;
}
