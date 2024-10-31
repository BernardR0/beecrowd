#include <stdio.h>

int main()  

{
   int i, n;
   int som = 0;

   for(i=0; i<6; i++) {
    scanf("%d", &n); 
    if(n>0) {
        som = som + 1;
    } 
   }
   printf("%d valores positivos", som);
    return 0;
}
