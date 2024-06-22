#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr = (int*)malloc(sizeof(int));
    if (ptr != NULL) {
        *ptr = 42; // Asignar un valor
        printf("Valor asignado: %d\n", *ptr);
        free(ptr); // Liberar memoria
    } else {
        printf("Error al asignar memoria.\n");
    }
    return 0;
}