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
    struct Persona* persona = (struct Persona*)malloc(sizeof(struct Persona));
    if (persona != NULL) {
        strcpy(persona->nombre, "Juan");
        persona->edad = 30;
        persona->altura = 1.75;
        persona->genero = 'M';

        printf("Nombre: %s\nEdad: %d\nAltura: %.2f\nGénero: %c\n",
               persona->nombre, persona->edad, persona->altura, persona->genero);

        free(persona);
    } else {
        printf("Error al asignar memoria.\n");
    }
    return 0;
}
