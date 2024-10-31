#include <stdio.h>
int Ehpar(int x);
int main() 
{
   int i;
   int retorno;
   for(i=1;i<=100;i++) {
    retorno = Ehpar(i);
    if(retorno==1) {
        printf("%d\n", i);
    }
   }
    return 0;
}

int Ehpar(int x)
{
    int divisor=2;
    if(x%divisor==0) {
        return 1;
    } else {
        return 0;
    }
}