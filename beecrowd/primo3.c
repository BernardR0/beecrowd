#include <stdio.h>

int main()
{
   int i,n;
   int retorno;

   for(i=2; i<45; i++) {
     retorno = ehPrimo(i);
     if(retorno==1) {
        printf("%d eh primo\n", i);
     } else {
        printf("%d nao eh primo\n", i);
     }
   }





    return 0;
}

int ehPrimo(int x)
{
    int divisor;
    for(divisor=2; divisor<x; divisor++) {
        if(x%divisor==0) {
            return 0;
        } 
    }
    return 1;

}