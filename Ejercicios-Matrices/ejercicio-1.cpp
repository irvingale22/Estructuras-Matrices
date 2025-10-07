#include <stdio.h> 

int main() {
    int matriz[4][4];
    
    // Inicializar todos los elementos en 0
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = 0;
        }
    }
    
    // Imprimir la matriz
    printf("Matriz 4x4 en ceros:\n");
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
