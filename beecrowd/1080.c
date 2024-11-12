#include <stdio.h>


int main () {

int x, i, proximo = 0, posicao = 0;

for (i = 1; i <= 100; i++){

  scanf("%d", &x);


  if (x > proximo){
    proximo = x;
    posicao = i;

  }
}
printf("%d\n", proximo);
printf("%d\n", posicao);
}