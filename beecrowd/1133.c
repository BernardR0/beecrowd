#include <stdio.h>

int main()
{
int aux;
int x,y;

scanf("%d", &x);
scanf("%d", &y);

if(y<x)
{
    aux=x;
    x=y;
    y=aux;

}

for(int i=x+1;i<=y;i++)
{
if(i%5==2 || i%5==3 || i%5==-2 || i%5==-3) {

 printf("%d\n", i);

}

}




return 0;
}
