#include <stdio.h>

int main()
{
   int n,i,soma=0,soma2=0;
   scanf("%d", &n);

   int valores[n];


   for(i=0;i<n;i++)
   {
     scanf("%d", &valores[i]);
   }
    
    for(i=0;i<n;i++) {
        

     if(valores[i]>=10 && valores[i]<=20) {
          soma++;
     } else {
        soma2++;
     }
    }
  
   
  
   printf("%d in\n%d out\n", soma, soma2);

    return 0;
}