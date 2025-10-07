#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4

int main() {
    int matriz[N][N];
    int i, j;
    int numBuscado;
    int encontrado = 0; // Bandera para saber si se encontró el número

    srand(time(NULL));

    // Llenar la matriz con números aleatorios entre 0 y 9
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            matriz[i][j] = rand() % 10;
        }
    }

    // Imprimir la matriz
    printf("Matriz 4x4 generada:\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Pedir número a buscar
    printf("\nIngrese el numero a buscar: ");
    scanf("%d", &numBuscado);

    // Buscar el número en la matriz
    printf("\nPosiciones donde aparece %d:\n", numBuscado);
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            if(matriz[i][j] == numBuscado) {
                printf("Fila %d, Columna %d\n", i, j);
                encontrado = 1;
            }
        }
    }

    if(!encontrado) {
        printf("El numero %d no se encuentra en la matriz.\n", numBuscado);
    }

    return 0;
}
