#include <stdio.h>

int main() {
  int codigo_pecas, numero_pecas, codigo_pecas2, numero_pecas2;
  double valor_unitario, valor_total, valor_unitario2;
  int deu_certo = scanf("%d", &codigo_pecas);
  deu_certo = scanf("%d", &numero_pecas);
  deu_certo = scanf("%lf", &valor_unitario);
  deu_certo = scanf("%d", &codigo_pecas2);
  deu_certo = scanf("%d", &numero_pecas2);
  deu_certo = scanf("%lf", &valor_unitario2);
  valor_total = numero_pecas * valor_unitario + numero_pecas2 * valor_unitario2;
  

  printf("VALOR A PAGAR: R$ %.2lf\n", valor_total);
  

  return 0;
}