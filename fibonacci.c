#include <stdio.h>

int main() 
{
    int a,b,serie,i;
    int tamanho;
    a=0;
    b=1;
    
    scanf("%d", &tamanho);
    
    for(i=0;i<tamanho; i++)
    {
        serie = a+b;
        a=b;
        b=serie;
        printf("%d ", a);
    }
    

    
    
    return 0;

}