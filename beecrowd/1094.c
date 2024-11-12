#include <stdio.h>

int main()
{
    int n,i,Quantia,total=0,C=0, R=0,S=0;
    char Tipo;
    double x=0,y=0,z=0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d %c", &Quantia, &Tipo);

        if(Tipo=='C') {
            C+=Quantia;
            x+=Quantia;
        } else if(Tipo=='R') {
            R+=Quantia;
            y+=Quantia;
        } else if(Tipo=='S') {
            S+=Quantia;
            z+=Quantia;
        }
        total+=Quantia;
         
    }
    x=x/total;
    y=y/total;
    z=z/total;
    
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", C);
    printf("Total de ratos: %d\n", R);
    printf("Total de sapos: %d\n", S);
    printf("Percentual de coelhos: %.2lf %%\n", x*100);
    printf("Percentual de ratos: %.2lf %%\n", y*100);
    printf("Percentual de sapos: %.2lf %%\n", z*100);
   
   

    return 0;
}