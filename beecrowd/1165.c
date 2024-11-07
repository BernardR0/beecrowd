#include <stdio.h>
int ehPrimo(int x);
int main() 
{
   int n,i,retorno;
   
   scanf("%d", &n);
   int b[n];
   for(i=0;i<n;i++){
    scanf("%d", &b[i]);
   }
   for(i=0;i<n;i++) {
    retorno = ehPrimo(b[i]);
    if(retorno == 1) {
        printf("%d eh primo\n", b[i]);
    } else {
        printf("%d nao eh primo\n", b[i]);
    }
   }

    return 0;
}

int ehPrimo(int x)
{
    int divisor;
    for(divisor=2;divisor<x;divisor++) {
        if(x%divisor==0) {
            return 0;
        }
    }
    return 1;


}