#include <stdio.h>

int main() 
{
  int n, i, j, linhas;
  printf("Quantas linhas voce quer? ");
  scanf("%d", &linhas);

  n=1;

  for(i=0; i<=linhas; i++){
    for(j=1; j<=i;j++) {
      printf("%d ", n);
      n++;  
    }
    printf("\n");
  }

    return 0;
}