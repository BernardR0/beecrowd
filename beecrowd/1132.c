#include <stdio.h>

int main()
{
int aux;
int x,y;
int soma=0;
scanf("%d", &x);
scanf("%d", &y);

if(y<x)
{
    aux=x;
    x=y;
    y=aux;

}

for(int i=x;i<=y;i++)
{
if(i%13!=0) {

 soma+=i;

}

}

printf("%d\n", soma);


return 0;
}