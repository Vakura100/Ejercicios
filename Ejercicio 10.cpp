#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr = (int*)calloc(20, sizeof(int));
    if (arr != NULL) {
        // Asignar valores al arreglo (como en el ejercicio 2)
        // ...

        // Redimensionar a la mitad
        int* new_arr = (int*)realloc(arr, 10 * sizeof(int));
        if (new_arr != NULL) {
            arr = new_arr;
            // Imprimir valores del nuevo arreglo
            for (int i = 0; i < 10; ++i) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            free(arr);
        } else {
            printf("Error al redimensionar memoria.\n");
            free(arr);
        }
    } else {
        printf("Error al asignar memoria.\n");
    }
    return 0;
}
