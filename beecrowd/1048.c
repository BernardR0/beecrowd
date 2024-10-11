#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () 
{
   double salario, reajuste, salariototal;
   scanf("%lf", &salario);

   if(salario > 0.00 && salario <= 400.00) {
   salariototal = salario + salario*0.15;
   reajuste = salario*0.15;
   printf("Novo salario: %.2lf\n", salariototal);
   printf("Reajuste ganho: %.2lf\n", reajuste);
   printf("Em percentual: 15 %%\n");
   
   } else if(salario >= 400.01 && salario <= 800.00) {
   salariototal = salario + salario*0.12;
   reajuste = salario*0.12;
   printf("Novo salario: %.2lf\n", salariototal);
   printf("Reajuste ganho: %.2lf\n", reajuste);
   printf("Em percentual: 12 %%\n");
   
   }  else if(salario >= 800.01 && salario <= 1200.00) {
   salariototal = salario + salario*0.10;
   reajuste = salario*0.10;
   printf("Novo salario: %.2lf\n", salariototal);
   printf("Reajuste ganho: %.2lf\n", reajuste);
   printf("Em percentual: 10 %%\n");
   
   }  else if(salario >= 1200.01 && salario <= 2000.00) {
   salariototal = salario + salario*0.07;
   reajuste = salario*0.07;
   printf("Novo salario: %.2lf\n", salariototal);
   printf("Reajuste ganho: %.2lf\n", reajuste);
   printf("Em percentual: 7 %%\n");
   
   }  else if(salario > 2000.00) {
   salariototal = salario + salario*0.04;
   reajuste = salario*0.04;
   printf("Novo salario: %.2lf\n", salariototal);
   printf("Reajuste ganho: %.2lf\n", reajuste);
   printf("Em percentual: 4 %%\n");
   }



    return 0;
}