#include <stdio.h>

int main() {
  double A, B, MEDIA;
  int deu_certo = scanf("%lf", &A);
  deu_certo = scanf("%lf", &B);
  MEDIA = (A * 3.5 + B * 7.5) / 11;
  printf("MEDIA = %.5lf\n", MEDIA);
  



  return 0;
}