#include <stdio.h>


int main(){
  int A, B, C, D, DIFERENCA;
  int deu_certo = scanf("%d", &A);
  deu_certo = scanf("%d", &B);
  deu_certo = scanf("%d", &C);
  deu_certo = scanf("%d", &D);

  DIFERENCA = (A*B - C*D);

  printf("DIFERENCA = %d\n", DIFERENCA);

  return 0;
}