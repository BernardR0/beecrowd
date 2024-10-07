#include <stdio.h>
#include <stdlib.h>

int main() {
  int idade, anos, meses, dias;
  int deu_certo = scanf("%d", &idade);
  anos = idade / 365;
  meses = idade % 365 / 30;
  dias = idade % 365 % 30;

  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);

  return 0;
}