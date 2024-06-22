#include <iostream>

class Persona {
public:
    Persona(const std::string& nombre, int edad, float altura, char genero)
            : nombre_(nombre), edad_(edad), altura_(altura), genero_(genero) {}

    // Otros miembros y métodos de la clase Persona

private:
    std::string nombre_;
    int edad_;
    float altura_;
    char genero_;
};

int main