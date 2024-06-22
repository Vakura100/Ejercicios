#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr = (int*)calloc(20, sizeof(int));
    if (arr != NULL) {
        // Asignar valores al arreglo (como en el ejercicio 2)
        // ...
        int* new_arr = (int*)realloc(arr, 40 * sizeof(int)); // Duplicar tamaño
        if (new_arr != NULL) {
            arr = new_arr;
            // Asignar valores a los nuevos espacios
            // ...
            for (int i = 0; i < 40; ++i) {
                printf("%d ", arr[i]); // Imprimir valores
            }
            printf("\n");
            free(arr); // Liberar memoria
        } else {
            printf("Error al redimensionar memoria.\n");
            free(arr); // Liberar memoria original
        }
    } else {
        printf("Error al asignar memoria.\n");
    }
    return 0;
}
