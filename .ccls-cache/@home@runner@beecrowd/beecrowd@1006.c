#include <stdio.h>


int main (){
  double A, B, C, MEDIA;

  int deu_certo = scanf("%lf", &A);
  deu_certo = scanf("%lf", &B);
  deu_certo = scanf("%lf", &C);

  MEDIA = (A * 2 + B * 3 + C * 5) / 10;

  printf("MEDIA = %.1lf\n", MEDIA);


  return 0;
}