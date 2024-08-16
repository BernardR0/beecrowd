#include <stdio.h>

int main(){
  int num_funcionario, horas_trabalhadas;
  double valor_hora, salario;

  int deu_certo = scanf("%d", &num_funcionario);
  deu_certo = scanf("%d", &horas_trabalhadas);
  deu_certo = scanf("%lf", &valor_hora);

  salario = (horas_trabalhadas * valor_hora);

  printf("NUMBER = %d\n", num_funcionario);
  printf("SALARY = U$ %.2lf\n", salario);

  
  return 0;
}