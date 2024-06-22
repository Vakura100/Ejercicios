#include <iostream>

int main() {
    int* ptr = new int;
    if (ptr != nullptr) {
        *ptr = 42; // Asignar un valor
        std::cout << "Valor asignado: " << *ptr << std::endl;
        delete ptr; // Liberar memoria
    } else {
        std::cout << "Error al asignar memoria." << std::endl;
    }
    return 0;
}
