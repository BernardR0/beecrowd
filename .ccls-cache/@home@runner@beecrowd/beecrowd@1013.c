#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b, c, MaiorAB, MaiorABC;
  
  
  int deu_certo = scanf("%d", &a);
  deu_certo = scanf("%d", &b);
  deu_certo = scanf("%d", &c);

  MaiorAB = (a + b + abs(a - b)) / 2;
  MaiorABC = (MaiorAB + c + abs(MaiorAB - c)) / 2;

  printf("%d eh o maior\n", MaiorABC);
  
  return 0;
}