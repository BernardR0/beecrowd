#include <stdio.h>
#include <stdlib.h>

int main() {
  char musica[10][30];
  int i, n;
  printf("Quantas músicas você quer adicionar? ");
  scanf("%d", &n);
  getchar();
  for(i=0; i<n; i++) {
    printf("Digite a música %d: \n", i + 1);
    int deu_certo = scanf("%s", musica[i]);
  }
  
printf("As musicas da playlist sao: \n");
  for(i=0; i<n; i++) {
    printf("%s\n", musica[i]);
  }
  

  return 0;
}