#include <iostream>

class Calculadora {
public:
    float calcularCubo(float numero) {
        float cubo = numero * numero * numero;
        return cubo;
    }
};

int main() {
    float numero;

    std::cout << "Ingrese un número real: ";
    std::cin >> numero;

    Calculadora calculadora;

    float cubo = calculadora.calcularCubo(numero);

    std::cout << "El cubo de " << numero << " es " << cubo << std::endl;

    return 0;
}