#include <stdio.h>
#include <stdlib.h>

int main() {
  int codigo_produto, quantidade_produto;
  double valor_unitario, valor_total;

  int deu_certo = scanf("%d", &codigo_produto);
  deu_certo = scanf("%d", &quantidade_produto);

  switch (codigo_produto) {
    case 1: valor_unitario = 4.00; break;
    case 2: valor_unitario = 4.50; break;
    case 3: valor_unitario = 5.00; break;
    case 4: valor_unitario = 2.00; break;
    case 5: valor_unitario = 1.50; break;
  }

  valor_total = valor_unitario * quantidade_produto;

  printf("Total: R$ %.2lf\n", valor_total);

  
  return 0;
}