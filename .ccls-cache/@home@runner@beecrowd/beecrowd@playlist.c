#include <stdio.h>
#include <stdlib.h>

int main() {
    char musicas[10][30]; // Array para 10 músicas de até 30 caracteres
    int i, n;

    printf("Quantas músicas deseja adicionar? ");
    scanf("%d", &n);
    getchar(); // Para consumir o '\n' após a leitura de `n`

    for(i = 0; i < n; i++) {
        printf("Digite a música %d: \n", i + 1);
        fgets(musicas[i], 30, stdin); // Lê a linha completa de até 30 caracteres
    }

    printf("As músicas da playlist são:\n");
    for(i = 0; i < n; i++) {
        printf("%s", musicas[i]);
    }

    return 0;
}
