#include <stdio.h>

int main()
{
    int aux, x=0, y=0, soma;

    while (1)
    { 
       
        scanf("%d %d", &x, &y);

       
        if (x == 0 || y == 0) {
            break;
        }

        
        if (y < x) {
            aux = x;
            x = y;
            y = aux;
        }

       
        soma = 0;

        
        for (int i = x; i <= y; i++)
        {
            printf("%d ", i);
            soma += i;    
        }
        printf("Sum=%d\n", soma);
    }

    return 0;
}