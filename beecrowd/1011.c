#include <stdio.h>

int main() {
  double raio;
  double pi = 3.14159;

  int deu_certo = scanf("%lf", &raio);

  printf("VOLUME = %.3lf\n", (4.0 / 3) * pi * raio * raio * raio);

  return 0;
}