#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4

int main() {
    int matriz[N][N];
    int i, j;
    int sumaPrincipal = 0, sumaSecundaria = 0;

    srand(time(NULL));

    // Llenar la matriz con números aleatorios entre 0 y 9
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            matriz[i][j] = rand() % 10;
        }
    }

    // Imprimir la matriz
    printf("Matriz 4x4:\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Imprimir y sumar la diagonal principal
    printf("\nDiagonal principal: ");
    for(i = 0; i < N; i++) {
        printf("%d ", matriz[i][i]);
        sumaPrincipal += matriz[i][i];
    }
    printf("\nSuma diagonal principal: %d\n", sumaPrincipal);

    // Imprimir y sumar la diagonal secundaria
    printf("\nDiagonal secundaria: ");
    for(i = 0; i < N; i++) {
        printf("%d ", matriz[i][N - 1 - i]);
        sumaSecundaria += matriz[i][N - 1 - i];
    }
    printf("\nSuma diagonal secundaria: %d\n", sumaSecundaria);

    return 0;
}
