#include <stdio.h>
#include <stdlib.h>


void notas(double valor_monetario);

int main() {
  double valor_monetario;
  notas(valor_monetario);

  return 0;
}

void notas(double valor_monetario) {
  int deu_certo = scanf("%lf", &valor_monetario);
  int notas_100 = valor_monetario / 100;
  valor_monetario = valor_monetario - notas_100 * 100;
  int notas_50 = valor_monetario / 50;
  valor_monetario = valor_monetario - notas_50 * 50;
  int notas_20 = valor_monetario / 20;
  valor_monetario = valor_monetario - notas_20 * 20;
  int notas_10 = valor_monetario / 10;
  valor_monetario = valor_monetario - notas_10 * 10;
  int notas_5 = valor_monetario / 5;
  valor_monetario = valor_monetario - notas_5 * 5;
  int notas_2 = valor_monetario / 2;
  valor_monetario = valor_monetario - notas_2 * 2;
  int moedas_1 = valor_monetario / 1;
  valor_monetario = valor_monetario - moedas_1 * 1;
  int moedas_50 = valor_monetario / 0.50;
  valor_monetario = valor_monetario - moedas_50 * 0.50;
  int moedas_25 = valor_monetario / 0.25;
  valor_monetario = valor_monetario - moedas_25 * 0.25;
  int moedas_10 = valor_monetario / 0.10;
  valor_monetario = valor_monetario - moedas_10 * 0.10;
  int moedas_5 = valor_monetario / 0.05;
  valor_monetario = valor_monetario - moedas_5 * 0.05;
  int moedas_01 = valor_monetario / 0.01;
  valor_monetario = valor_monetario - moedas_01 * 0.01;
  
  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n", notas_100);
  printf("%d nota(s) de R$ 50.00\n", notas_50);
  printf("%d nota(s) de R$ 20.00\n", notas_20);
  printf("%d nota(s) de R$ 10.00\n", notas_10);
  printf("%d nota(s) de R$ 5.00\n", notas_5);
  printf("%d nota(s) de R$ 2.00\n", notas_2);
  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n", moedas_1);
  printf("%d moeda(s) de R$ 0.50\n", moedas_50);
  printf("%d moeda(s) de R$ 0.25\n", moedas_25);
  printf("%d moeda(s) de R$ 0.10\n", moedas_10);
  printf("%d moeda(s) de R$ 0.05\n", moedas_5);
  printf("%d moeda(s) de R$ 0.01\n", moedas_01);
}