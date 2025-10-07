#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILA_A 4
#define COLUMNA_A 4
#define FILA_B COLUMNA_A
#define COLUMNA_B 4

// Función para imprimir matriz
void imprimirMatriz(int matriz[][COLUMNA_B], int filas, int columnas, char nombre) {
    printf("Matriz %c:\n", nombre);
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int A[FILA_A][COLUMNA_A];
    int B[FILA_B][COLUMNA_B];
    int C[FILA_A][COLUMNA_B];
    int i, j, k;

    srand(time(NULL));

    // Llenar matrices A y B con números aleatorios entre 0 y 9
    for(i = 0; i < FILA_A; i++) {
        for(j = 0; j < COLUMNA_A; j++) {
            A[i][j] = rand() % 10;
        }
    }

    for(i = 0; i < FILA_B; i++) {
        for(j = 0; j < COLUMNA_B; j++) {
            B[i][j] = rand() % 10;
        }
    }

    // Inicializar matriz C en 0
    for(i = 0; i < FILA_A; i++) {
        for(j = 0; j < COLUMNA_B; j++) {
            C[i][j] = 0;
        }
    }

    // Multiplicación de matrices
    for(i = 0; i < FILA_A; i++) {
        for(j = 0; j < COLUMNA_B; j++) {
            for(k = 0; k < COLUMNA_A; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Imprimir matrices
    imprimirMatriz(A, FILA_A, COLUMNA_A, 'A');
    imprimirMatriz(B, FILA_B, COLUMNA_B, 'B');
    imprimirMatriz(C, FILA_A, COLUMNA_B, 'C');

    return 0;
}
