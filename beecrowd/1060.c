#include <stdio.h>

int main()  
{
   double n;
   int i,positivos=0;

   for(i=0;i<6;i++) {
    scanf("%lf", &n); 
    if(n>0) {
        positivos++;
    } 
   }
   printf("%d valores positivos\n", positivos);
    return 0;
}
