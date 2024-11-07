#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, aux,soma=0, i;
    scanf("%d",&x);
    scanf("%d",&y);
    if(y<x)
    {
        aux=x;
        x=y+1;
        y=aux;
    }
    for(i=x;i<y;i++) {
        if(i%2!=0) {
            if(i<0){
            soma -= i*-1;  
            } else {
             soma += i;      
            }
          
        }
    }

    printf("%d\n", soma);
    return 0;
}