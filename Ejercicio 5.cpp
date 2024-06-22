#include <iostream>

int main() {
    int* arr = new int[20];
    if (arr != nullptr) {
        for (int i = 0; i < 20; ++i) {
            arr[i] = i + 1; // Asignar valores
        }
        for (int i = 0; i < 20; ++i) {
            std::cout << arr[i] << " "; // Imprimir valores
        }
        std::cout << std::endl;
        delete[] arr; // Liberar memoria
    } else {
        std::cout << "Error al asignar memoria." << std::endl;
    }
    return 0;
}