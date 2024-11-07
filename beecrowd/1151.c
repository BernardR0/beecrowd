#include <stdio.h>

int main() 
{
    int a,b,serie,i;
    int tamanho;
    a=0;
    b=1;
    
    scanf("%d", &tamanho);
    printf("%d ", a);
    for(i=2;i<tamanho; i++)
    {
        serie = a+b;
        a=b;
        b=serie;
        printf("%d ", a);
    }
    printf("%d\n", serie);
    

    
    
    return 0;

}