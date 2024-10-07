#include <stdio.h>
#include <stdlib.h>

void notas(double valor_monetario);

int main() {
    double valor_monetario;
    printf("Digite o valor: ");
    if (scanf("%lf", &valor_monetario) != 1) {
        printf("Erro ao ler o valor.\n");
        return 1;
    }

    notas(valor_monetario);
    return 0;
}

void notas(double valor_monetario) {
    // Matrizes para valores das notas e moedas
    double valores[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    int quantidades[sizeof(valores) / sizeof(valores[0])];  // Matriz para armazenar as quantidades

    // Inicializa as quantidades como zero
    for (int i = 0; i < sizeof(valores) / sizeof(valores[0]); i++) {
        quantidades[i] = 0;
    }

    // Calcula a quantidade de cada nota/moeda
    for (int i = 0; i < sizeof(valores) / sizeof(valores[0]); i++) {
        quantidades[i] = valor_monetario / valores[i];
        valor_monetario -= quantidades[i] * valores[i];
        // Correção para problemas de precisão de ponto flutuante
        valor_monetario = ((int)(valor_monetario * 100 + 0.5)) / 100.0;
    }

    // Exibe o resultado
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {  // Primeiras 6 posições correspondem às notas
        printf("%d nota(s) de R$ %.2f\n", quantidades[i], valores[i]);
    }

    printf("MOEDAS:\n");
    for (int i = 6; i < sizeof(valores) / sizeof(valores[0]); i++) {  // Últimas posições correspondem às moedas
        printf("%d moeda(s) de R$ %.2f\n", quantidades[i], valores[i]);
    }
}