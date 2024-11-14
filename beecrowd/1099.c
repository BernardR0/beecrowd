#include <stdio.h>

int main()
{

    int n,x,y,i,j, soma=0,aux;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        soma=0;
        scanf("%d %d", &x,&y);
        if(y<x)
    {
        aux=x;
        x=y;
        y=aux;
    }
        
        for(j=x+1;j<y;j++) {
            if(j%2!=0) {
                if(i<0) {
                    soma-=j*-1;
                } else { 
                soma+=j;
                }
            }
        
       
        
    }
      printf("%d\n", soma);
    }
   
    return 0;

}