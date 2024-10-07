#include <stdio.h>
#include <stdlib.h>

int main() {
  int valor, notas, resto;
  int cem, cinquenta, vinte, dez, cinco, dois, um;
  int cem_resto, cinquenta_resto, vinte_resto, dez_resto, cinco_resto,
      dois_resto, um_resto;
  int deu_certo = scanf("%d", &valor);
  notas = valor;
  cem = notas / 100;
  cem_resto = notas % 100; // % é o resto da divisão, ou seja, o que sobra da divisão, por exemplo, se eu dividir 10 por 3, o resto é 1
  cinquenta = cem_resto / 50;
  cinquenta_resto = cem_resto % 50;
  vinte = cinquenta_resto / 20;
  vinte_resto = cinquenta_resto % 20;
  dez = vinte_resto / 10;
  dez_resto = vinte_resto % 10;
  cinco = dez_resto / 5;
  cinco_resto = dez_resto % 5;
  dois = cinco_resto / 2;
  dois_resto = cinco_resto % 2;
  um = dois_resto / 1;
  um_resto = dois_resto % 1;
  printf("%d\n", valor);
  printf("%d nota(s) de R$ 100,00\n", cem);
  printf("%d nota(s) de R$ 50,00\n", cinquenta);
  printf("%d nota(s) de R$ 20,00\n", vinte);
  printf("%d nota(s) de R$ 10,00\n", dez);
  printf("%d nota(s) de R$ 5,00\n", cinco);
  printf("%d nota(s) de R$ 2,00\n", dois);
  printf("%d nota(s) de R$ 1,00\n", um);
  return 0;
}