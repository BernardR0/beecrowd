#include <stdio.h>
#include <stdlib.h>

int main(){
  int A, B, C, D;
  int deu_certo = scanf("%d", &A);
  deu_certo = scanf("%d", &B);
  deu_certo = scanf("%d", &C);
  deu_certo = scanf("%d", &D);

  if((B > C) && (D > A) && ((C + D) > (A + B)) && (C > 0) && (D > 0) && (A % 2 == 0)) {
    printf("Valores aceitos\n");
  } else {
    printf("Valores nao aceitos\n");
  }
  
  
  return 0;
}