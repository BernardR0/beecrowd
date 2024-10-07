#include <stdio.h>
#include <stdlib.h>
int perfeito(int n);
int main() {
  int n, a, b;
  int retorno;
  int deu_certo = scanf("%d %d", &a, &b);

  for (n = a; n < b; n++) {
    retorno = perfeito(n);
    if (retorno == 1) {
      printf("%d eh perfeito\n", n);
    } else {
      printf("%d nao eh perfeito\n", n);
    }
  }

  return 0;
}

int perfeito(int n) {
  int i, soma;
  soma = 0;

  for (i = 1; i < n; i++) {
    if (n % i == 0) {
      soma = soma + i;
     
    }
  }
  if(soma == n){
    return 1;
  } else {
    return 0; 
  }
  
  
}