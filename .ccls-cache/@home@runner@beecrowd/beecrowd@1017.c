#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tempo, velocidade;
  double combustivel, distancia;
  int deu_certo = scanf("%d", &tempo);
  deu_certo = scanf("%d", &velocidade);
  distancia = velocidade * tempo;
  combustivel = distancia / 12;
  printf("%.3lf\n", combustivel);
  return 0;
}