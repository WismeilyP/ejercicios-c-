#include <iostream>

class CalculadoraNumeros {
public:
    void realizarOperaciones() {
        double numero1, numero2;

        std::cout << "Ingrese el primer número: ";
        std::cin >> numero1;

        std::cout << "Ingrese el segundo número: ";
        std::cin >> numero2;

        double suma = numero1 + numero2;
        double resta = numero1 - numero2;
        double multiplicacion = numero1 * numero2;
        double division = numero1 / numero2;
        int resto = static_cast<int>(numero1) % static_cast<int>(numero2);

        std::cout << "Suma: " << suma << std::endl;
        std::cout << "Resta: " << resta << std::endl;
        std::cout << "Multiplicación: " << multiplicacion << std::endl;
        std::cout << "División: " << division << std::endl;
        std::cout << "Resto (módulo): " << resto << std::endl;
    }
};

int main() {
    CalculadoraNumeros calculadora;

    calculadora.realizarOperaciones();

    return 0;
}