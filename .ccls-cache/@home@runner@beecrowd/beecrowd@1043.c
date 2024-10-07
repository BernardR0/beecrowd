#include <stdio.h>
#include <stdlib.h>

int main() {
  double A, B, C;
  double perimetro, area;
  int deu_certo = scanf("%lf", &A);
  deu_certo = scanf("%lf", &B);
  deu_certo = scanf("%lf", &C);
  perimetro = A + B + C;
  area = ((A + B) * C) / 2;
  if ((A + B > C) && (A + C > B) && (B + C > A)) {
    printf("Perimetro = %.1lf\n", perimetro);
  } else {
    printf("Area = %.1lf\n", area);
  }

  return 0;
}