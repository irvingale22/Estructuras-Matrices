#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][4];
    int i, j;
    int suma = 0;
    float promedio;

    // Inicializar semilla para números aleatorios
    srand(time(NULL));

    // Llenar la matriz con números aleatorios entre 0 y 9
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 10; // Entre 0 y 9
            suma += matriz[i][j];       // Acumular la suma
        }
    }

    // Calcular el promedio
    promedio = suma / 16.0; // 16 = 4x4

    // Imprimir la matriz
    printf("Matriz 4x4 generada:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Mostrar resultados
    printf("\nSuma de todos los elementos: %d\n", suma);
    printf("Promedio de los elementos: %.2f\n", promedio);

    return 0;
}
