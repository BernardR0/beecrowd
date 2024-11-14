#include <stdio.h>

int main()
{
   double i,j,k,a=1;
   
   k=3.0;
   
   for(i=0;i<2.1;i+=0.2)
   {
    
    for(j=a;j<=k;j++) {
        if(i==(int)i) { 
        printf("I=%d J=%d\n", (int)i,(int)(i+j));
        } else {
            
            printf("I=%.1lf J=%.1lf\n", i, i+j);
        }
        
    }
    
     
   }


    return 0;
}