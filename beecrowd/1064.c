#include <stdio.h>
int positivo(int x);
int main() 
{
   int i, retorno, pos=0; 
   float n,media=0.0, soma=0.0; 
   
   for(i=0;i<6;i++)
   {
    scanf("%f", &n);
     retorno = positivo(n);
     if(retorno==1) {
        pos++;
        soma += n;
     }
   }

   
   

   printf("%d valores positivos\n", pos);
   media=soma/pos;
   printf("%.1f\n", media);

    return 0;
}

int positivo(int x)
{
    if(x>0) {
        return 1;
    } else {
        return 0;
    }
}