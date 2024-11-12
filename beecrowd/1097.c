#include <stdio.h>

int main()
{
   int i,j,k,a=7;
   k=5;
   
   for(i=1;i<=9;i+=2)
   {
    
    for(j=a;j>=k;j--) {
    
        printf("I=%d J=%d\n", i, j);
        
        
    }
     k+=2;
     a+=2;
     
   }


    return 0;
}