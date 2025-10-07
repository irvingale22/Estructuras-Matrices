#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS 3
#define COLUMNAS 4

// Función para imprimir matriz de cualquier tamaño
void imprimirMatriz(int matriz[][COLUMNAS], int filas, int columnas, char nombre) {
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
    int A[FILAS][COLUMNAS];
    int AT[COLUMNAS][FILAS]; // Transpuesta será 4x3
    int i, j;

    srand(time(NULL));

    // Llenar matriz A con números aleatorios entre 0 y 9
    for(i = 0; i < FILAS; i++) {
        for(j = 0; j < COLUMNAS; j++) {
            A[i][j] = rand() % 10;
        }
    }

    // Calcular la transpuesta
    for(i = 0; i < FILAS; i++) {
        for(j = 0; j < COLUMNAS; j++) {
            AT[j][i] = A[i][j];
        }
    }

    // Imprimir matrices
    imprimirMatriz(A, FILAS, COLUMNAS, 'A');

    // Imprimir transpuesta (usando un bucle propio, ya que AT tiene diferente tamaño)
    printf("Matriz AT (transpuesta de A):\n");
    for(i = 0; i < COLUMNAS; i++) {
        for(j = 0; j < FILAS; j++) {
            printf("%d\t", AT[i][j]);
        }
        printf("\n");
    }

    return 0;
}
