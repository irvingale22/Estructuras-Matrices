#include <stdio.h>

int main() {
    int matriz[4][4]; 
    int i, j;

    printf("Ingresa 16 valores para la matriz 4x4:\n");

    // Ciclo para llenar la matriz
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Ciclo para imprimir la matriz
    printf("\nLa matriz completa es:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
