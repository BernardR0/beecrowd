
#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int n);
int main()
{

    int n, a, b;
    int retorno;
    int deu_certo = scanf("%d %d", &a, &b);



    for(n=a;n<b;n++)
    {
        retorno = ehPrimo(n);
        if (retorno == 1)
        {
            printf("O numero %d eh primo\n",n);
        }
        else
        {
            printf("o numero %d nao eh primo\n",n);
        }
    }
}

int ehPrimo(int n)
{
    int divisor;

    if (n == 1)
    {
        return 0;
    }

    for (divisor = 2; divisor < n; divisor++)
    {
        if (n % divisor == 0)
        {
            return 0;
        }
    }

    return 1;
}