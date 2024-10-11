#include <stdio.h>
#include <stdlib.h>
int primo(int x);
int main()
{
    int n, i, entrada;
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        scanf("%d", &entrada);
        if(primo(entrada)){
            printf("%d Prime\n", entrada);
        } else {
            printf("%d Not Prime\n", entrada);
        }

    }
    return 0;
}

int primo(int x)
{
    int divisor;
    if(x==1) {
        return 0;
    }
    for(divisor=2;divisor<x;divisor++){
       if(x%divisor==0){
        return 0;
       }        
    }
    return 1;
}