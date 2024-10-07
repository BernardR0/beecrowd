#include <stdio.h>
#include <stdlib.h>
int ehPrimo(int n);
int main() {
  int n, a, b, retorno;
  int deu_certo = scanf("%d %d", &a, &b);

  for (n = a; n <= b; n++) {
    retorno = ehPrimo(n);
    if (retorno == 1) {
      printf("%d eh primo\n", n);
    } else {
      printf("%d nao eh primo\n", n);
    }
  }

  return 0;
}

int ehPrimo(int n) {
  int divisor;
  if(n == 1) {
    return 0;
  }
  for (divisor = 2; divisor < n; divisor++) {
    if (n % divisor == 0) {
      return 0;
    } 
    
  }
  return 1;
}
