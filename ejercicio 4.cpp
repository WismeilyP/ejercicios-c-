#include <iostream>

class ClasificadorNumero {
public:
    int clasificarNumero(float numero) {
        if (numero < 0)
            return -1;
        else if (numero > 0)
            return 1;
        else
            return 0;
    }
};

int main() {
    ClasificadorNumero clasificador;
    float numero;

    std::cout << "Ingrese un número real: ";
    std::cin >> numero;

    int resultado = clasificador.clasificarNumero(numero);

    std::cout << "El número clasificado es: " << resultado << std::endl;

    return 0;
}