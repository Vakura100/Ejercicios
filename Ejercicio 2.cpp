#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr = (int*)calloc(20, sizeof(int));
    if (arr != NULL) {
        for (int i = 0; i < 20; ++i) {
            arr[i] = i + 1; // Asignar valores
        }
        for (int i = 0; i < 20; ++i) {
            printf("%d ", arr[i]); // Imprimir valores
        }
        printf("\n");
        free(arr); // Liberar memoria
    } else {
        printf("Error al asignar memoria.\n");
    }
    return 0;
}