#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  double A, B, C;

  int deu_certo = scanf("%lf", &A);
  deu_certo = scanf("%lf", &B);
  deu_certo = scanf("%lf", &C);
  double delta = B * B - 4 * A * C;
  if (B > 0 && C > 0 && A > 0 && delta > 0) {

    printf("R1 = %.5lf\n", (-B + sqrt(delta)) / (2 * A));
    printf("R2 = %.5lf\n", (-B - sqrt(delta)) / (2 * A));
  } else {
    printf("Impossivel calcular\n");
  }

  return 0;
}
