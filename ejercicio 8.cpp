#include <iostream>
#include <string>

class Operaciones {
public:
    char obtenerPrimeraLetra(std::string texto) {
        return texto[0];
    }

    void realizarOperaciones() {
        double numero1, numero2, numero3;

        std::cout << "Ingrese el primer número: ";
        std::cin >> numero1;

        std::cout << "Ingrese el segundo número: ";
        std::cin >> numero2;

        std::cout << "Ingrese el tercer número: ";
        std::cin >> numero3;

        double suma = numero1 + numero2 + numero3;
        double multiplicacion = numero1 * numero2 * numero3;

        std::cout << "Suma: " << suma << std::endl;
        std::cout << "Multiplicación: " << multiplicacion << std::endl;
    }
};

int main() {
    Operaciones operaciones;

    std::string texto;
    std::cout << "Ingrese una cadena de texto: ";
    std::cin >> texto;

    char primeraLetra = operaciones.obtenerPrimeraLetra(texto);

    std::cout << "La primera letra es: " << primeraLetra << std::endl;

    operaciones.realizarOperaciones();

    return 0;
}