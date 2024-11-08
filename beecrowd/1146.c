#include <stdio.h>

int main()
{
   int i,y;
   while(1) {
    scanf("%d", &y);
    if(y==0) {
        break;
    }
    for(i=1;i<=y;i++)
   {
    printf("%d", i);
    if(i==y) {
        printf("\n");
    } else {
        printf(" ");
    }
     
   }


   } 
   

   



    return 0;
}