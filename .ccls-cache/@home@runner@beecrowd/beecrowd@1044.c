#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int A, B;

  int deu_certo = scanf("%d", &A);
  deu_certo = scanf("%d", &B);

  if(B%A == 0 || A%B == 0) {
    
    printf("Sao Multiplos\n");
  } else {
    printf("Nao sao Multiplos\n");
  }
 

  
  return 0;
}