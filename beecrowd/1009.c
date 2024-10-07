/* Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais.*/

#include <stdio.h>

int main() {
  char nome[30];
  double salario_fixo, vendas, salario_total;

  int deu_certo = scanf("%s", nome);
  deu_certo = scanf("%lf", &salario_fixo);
  deu_certo = scanf("%lf", &vendas);

  salario_total = ((vendas * 0.15) + salario_fixo);

  printf("TOTAL = R$ %.2lf\n", salario_total);

  return 0;
}