#include <stdio.h>
#include <stdlib.h>

int main()
{
  int valor, horas, minutos, segundos;
  int deu_certo = scanf("%d", &valor);
  horas = valor/3600;
  minutos = valor%3600/60;
  segundos = valor%60;

  printf("%d:%d:%d\n", horas, minutos, segundos);
  
  return 0;
}