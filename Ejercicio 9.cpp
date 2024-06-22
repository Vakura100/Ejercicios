#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> ptr = std::make_unique<int>(42);
    std::cout << "Valor asignado: " << *ptr << std::endl;
    // No es necesario liberar la memoria manualmente (smart pointer se encarga)
    return 0;
}
