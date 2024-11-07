#include <stdio.h>
int positivo(int x);
int par(int x);
int main() 
{
   int n,i, retorno1,retorno2, pos=0,neg=0,pa=0,impar=0; 
    
   
   for(i=0;i<5;i++)
   {
    scanf("%d", &n);
     if(n!=0) {  
     retorno1 = positivo(n);
     if(retorno1==1) {
        pos++;
    } else {
        neg++;
    }
   }
    retorno2 = par(n);
     if(retorno2==1) {
        pa++;
     } else {
        impar++;
     }
    
   }

   
   

   printf("%d valor(es) par(es)\n", pa);
   printf("%d valor(es) impar(es)\n", impar);
   printf("%d valor(es) positivo(s)\n", pos);
   printf("%d valor(es) negativo(s)\n", neg);  

    return 0;
}

int par(int x)
{
    if(x==0){
        return 1;
    }
    
    if(x%2==0) {
        return 1;
    } else {
        return 0;
    }
    
}

int positivo(int x)
{
   
    if(x>0) {
        return 1;
    } else {
        return 0;
    }
    
}
