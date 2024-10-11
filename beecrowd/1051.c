#include <stdio.h>

int main()
{ 
  double dinheiro, imposto;
  scanf("%lf", &dinheiro);
  
  if(dinheiro>0 && dinheiro<=2000.00) {
    printf("Isento\n");
  } else if(dinheiro>=2000.01 && dinheiro<=3000.00) {
    imposto = ((dinheiro-2000.00)*0.08);
    printf("R$ %.2lf\n", imposto); 
  } else if(dinheiro>=3000.01 && dinheiro <= 4500.00) {
    imposto = ((dinheiro-3000)*0.18)+80;
    printf("R$ %.2lf\n", imposto);
  } else if(dinheiro>4500.00) {
    imposto = ((dinheiro-4500)*0.28)+350;
    printf("R$ %.2lf\n", imposto);
  }


    return 0;
}
