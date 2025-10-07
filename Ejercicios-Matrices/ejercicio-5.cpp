#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][4];
    int i, j;
    int max, min;
    int filaMax, colMax, filaMin, colMin;

    // Inicializar semilla para números aleatorios
    srand(time(NULL));

    // Llenar la matriz con números aleatorios entre 0 y 99
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 100; // Números entre 0 y 99
        }
    }

    // Inicializar max y min con el primer elemento de la matriz
    max = min = matriz[0][0];
    filaMax = colMax = filaMin = colMin = 0;

    // Buscar máximo y mínimo
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(matriz[i][j] > max) {
                max = matriz[i][j];
                filaMax = i;
                colMax = j;
            }
            if(matriz[i][j] < min) {
                min = matriz[i][j];
                filaMin = i;
                colMin = j;
            }
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

    // Mostrar resultados
    printf("\nValor max: %d en la posicion (%d, %d)\n", max, filaMax, colMax);
    printf("Valor min: %d en la posicion (%d, %d)\n", min, filaMin, colMin);

    return 0;
}
