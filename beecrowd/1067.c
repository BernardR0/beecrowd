#include <stdio.h>
int Ehpar(int x);
int main() 
{
   int i, n;
   scanf("%d", &n);
   int retorno;
   for(i=1;i<=n;i++) {
    retorno = Ehpar(i);
    if(retorno==0) {
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