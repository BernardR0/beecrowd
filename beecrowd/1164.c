#include <stdio.h>
#include <stdlib.h>
int perfeito(int x);
int main() 
{
   int n,i, retorno;
   scanf("%d", &n);
   int b[n];
   for(i=0;i<n;i++)
   {
    scanf("%d", &b[i]);
   }
   for(i=0;i<n;i++)
   {
    retorno = perfeito(b[i]);
    if(retorno==1) {
        printf("%d eh perfeito\n", b[i]);
    } else {
        printf("%d nao eh perfeito\n", b[i]);
    }
   }



    return 0;

}

int perfeito(int x)
{
    int divisor;
    int soma=0;

    for(divisor=1;divisor<x;divisor++)
    {
        if(x%divisor==0) {
          soma+=divisor;
        }
        
    }
    if(soma==x) {
            return 1;
        } else {
            return 0;
        }
}