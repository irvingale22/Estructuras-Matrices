#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][4];
    int sumaFila[4] = {0};
    int sumaColumna[4] = {0};
    int i, j;

    // Inicializar semilla para números aleatorios
    srand(time(NULL));

    // Llenar la matriz con números aleatorios entre 0 y 9
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 10;
        }
    }

    // Calcular suma de filas y columnas
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            sumaFila[i] += matriz[i][j];
            sumaColumna[j] += matriz[i][j];
        }
    }

    // Imprimir la matriz
    printf("Matriz 4x4 generada aleatoriamente:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Imprimir suma de cada fila
    printf("\nSuma de cada fila:\n");
    for(i = 0; i < 4; i++) {
        printf("Fila %d: %d\n", i, sumaFila[i]);
    }

    // Imprimir suma de cada columna
    printf("\nSuma de cada columna:\n");
    for(j = 0; j < 4; j++) {
        printf("Columna %d: %d\n", j, sumaColumna[j]);
    }

    return 0;
}
