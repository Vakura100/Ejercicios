#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Persona {
    char nombre[50];
    int edad;
    float altura;
    char genero;
};

int main() {
    int num_personas = 5;
    struct Persona* personas = (struct Persona*)calloc(num_personas, sizeof(struct Persona));
    if (personas != NULL) {
        // Asignar valores a cada persona (como en el ejercicio 7)
        // ...

        // Imprimir información de todas las personas
        for (int i = 0; i < num_personas; ++i) {
            printf("Persona %d:\n", i + 1);
            printf("Nombre: %s\nEdad: %d\nAltura: %.2f\nGénero: %c\n",
                   personas[i].nombre, personas[i].edad, personas[i].altura, personas[i].genero);
        }

        free(personas);
    } else {
        printf("Error al asignar memoria.\n");
    }
    return 0;
}
