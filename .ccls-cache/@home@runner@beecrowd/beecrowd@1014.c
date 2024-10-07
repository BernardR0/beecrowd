#include <stdio.h>

int main()
{
  int distancia_total;
  float combustivel_gasto, consumo_medio;
  int deu_certo = scanf("%d", &distancia_total);
  deu_certo = scanf("%f", &combustivel_gasto);

  consumo_medio = distancia_total / combustivel_gasto;


  printf("%.3f km/l\n", consumo_medio);
 return 0;
}