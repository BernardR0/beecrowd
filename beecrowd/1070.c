#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,count=0;
    scanf("%d", &x);
    
    
    for(i=x;count<6;i++)
    {
        if(i % 2 != 0) {
            printf("%d\n", i);
            count++;
        }
    }
    return 0;
}