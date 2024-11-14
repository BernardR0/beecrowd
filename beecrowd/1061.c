#include <stdio.h>

int main()
{
    int dia1,dia2, horas1,minutos1, segundos1, horas2, minutos2, segundos2,dias,horas,minutos,segundos, tempo1, tempo2, diferenca;
    scanf("%*s %d", &dia1);
    scanf("%d %*s%d %*s %d", &horas1,&minutos1,&segundos1);
    scanf("%*s %d", &dia2);
    scanf("%d %*s %d %*s %d", &horas2,&minutos2,&segundos2);
    tempo1=(segundos1+(minutos1*60)+(horas1*60*60)+(dia1*24*60*60));   
    tempo2=(segundos2+(minutos2*60)+(horas2*60*60)+(dia2*24*60*60));
    diferenca= tempo2-tempo1;

    dias = diferenca / 86400;
    diferenca = diferenca % 86400;
    horas = diferenca / 3600;
    diferenca = diferenca % 3600;
    minutos = diferenca / 60;
    segundos = diferenca % 60;

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}