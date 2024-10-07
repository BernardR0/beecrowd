#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tempo_inicial, tempo_final, tempo_duracao;
  int deu_certo = scanf("%d", &tempo_inicial);
  deu_certo = scanf("%d", &tempo_final);
  
  
  if (tempo_inicial >= tempo_final) {
    tempo_duracao = (24 - tempo_inicial) + tempo_final;
    printf("O JOGO DUROU %d HORA(S)\n", tempo_duracao);
  } else {
    tempo_duracao = tempo_final - tempo_inicial;
    printf("O JOGO DUROU %d HORA(S)\n", tempo_duracao);
  }
  
 
  

  
  return 0;
}