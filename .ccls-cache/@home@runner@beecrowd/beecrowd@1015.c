#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float x1, y1, x2, y2, distancia;
  int deu_certo = scanf(" %f %f", &x1, &y1);
  deu_certo = scanf(" %f %f", &x2, &y2);

  distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  printf("%.4f\n", distancia);
  
  return 0;
}