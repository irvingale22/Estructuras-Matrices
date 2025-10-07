#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para imprimir matriz 4x4
void imprimirMatriz(int matriz[4][4], char nombre) {
    int i, j;
    printf("Matriz %c:\n", nombre);
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int A[4][4], B[4][4], C[4][4];
    int i, j;

    srand(time(NULL));

    // Llenar matrices A y B con números aleatorios y calcular C = A + B
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Imprimir matrices
    imprimirMatriz(A, 'A');
    imprimirMatriz(B, 'B');
    imprimirMatriz(C, 'C');

    return 0;
}
