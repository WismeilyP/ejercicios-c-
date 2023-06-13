#include <iostream>
#include <cmath>

class CalculadoraPotenciaRaiz {
public:
    double calcularPotencia(double base, int exponente) {
        return pow(base, exponente);
    }

    void calcularPotenciasDePI() {
        const double PI = 3.14159;

        for (int i = 2; i <= 10; i++) {
            double potencia = calcularPotencia(PI, i);
            double raizCuadrada = sqrt(potencia);

            std::cout << "Potencia de PI elevado a " << i << ": " << potencia << std::endl;
            std::cout << "Raíz cuadrada de la potencia: " << raizCuadrada << std::endl;
        }
    }
};

int main() {
    CalculadoraPotenciaRaiz calculadora;

    calculadora.calcularPotenciasDePI();

    return 0;
}