#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][4];
    int i, j;
    int pares = 0, impares = 0;

    // Inicializar semilla para números aleatorios
    srand(time(NULL));

    // Llenar la matriz con números aleatorios entre 0 y 9
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 10; // Entre 0 y 9

            // Contar pares e impares
            if(matriz[i][j] % 2 == 0) {
                pares++;
            } else {
                impares++;
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

    // Mostrar la cantidad de pares e impares
    printf("\nCantidad de números pares: %d\n", pares);
    printf("Cantidad de números impares: %d\n", impares);

    return 0;
}
