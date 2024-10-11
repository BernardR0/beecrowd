#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   double A, B, C;
   scanf("%lf %lf %lf", &A, &B, &C);
   
 if(A>=B+C){
    printf("NAO FORMA TRIANGULO\n");
  } 
 if(pow(A,2)==pow(B,2) + pow(C,2)) {
    printf("TRIANGULO RETANGULO\n");
  }  
 if(pow(A,2)>pow(B,2) + pow(C,2)) {
    printf("TRIANGULO OBTUSANGULO\n");
  } 
 if(pow(A,2)<pow(B,2) + pow(C,2)){
    printf("TRIANGULO ACUTANGULO\n");
  }
 if(A==B==C){
    printf("TRIANGULO EQUILATERO\n"); 
  }
 if(A==B || A==C || B==C ){
    printf("TRIANGULO ISOCELES\n");
  }
  
   
    return 0;
}
