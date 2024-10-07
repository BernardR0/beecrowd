#include <stdio.h>
#include <stdlib.h>

int main(){
  double nota_1, nota_2, nota_3, nota_4, media;
  int deu_certo = scanf("%lf", &nota_1);
  deu_certo = scanf("%lf", &nota_2);
  deu_certo = scanf("%lf", &nota_3);
  deu_certo = scanf("%lf", &nota_4);

  media = (nota_1 * 2 + nota_2 * 3 + nota_3 * 4 + nota_4 * 1)/10;
  printf("Media: %.1lf\n", media);
  if(media >= 7.0) {
    printf("Aluno aprovado.\n");
  } else if(media < 5.0) {
    printf("Aluno reprovado.\n");
  } else if (media >= 5.0 && media <= 6.9) {
    printf("Aluno em exame.\n");
    double nota_exame, media_final;
    int deu_certo = scanf("%lf", &nota_exame);
    media_final = (nota_exame + media) / 2;
    printf("Nota do exame: %.1lf\n" , nota_exame);
    if(media_final >= 5.0) {
      printf("Aluno aprovado.\n");
      printf("Media final: %.1lf\n", media_final);
    } else {
      printf("Aluno reprovado.\n");
    }
  }


  

  return 0;
}