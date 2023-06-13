#include <iostream>

class ConversorDistancia {
public:
    float distanciaEnKilometros;
    float distanciaEnMetros;

    void leerDistancia() {
        std::cout << "Ingrese la distancia en kilómetros: ";
        std::cin >> distanciaEnKilometros;
    }

    void convertirAMetros() {
        distanciaEnMetros = distanciaEnKilometros * 1000;
    }

    void mostrarDistanciaEnMetros() {
        std::cout << "La distancia en metros es: " << distanciaEnMetros << std::endl;
    }
};

int main() {
    ConversorDistancia conversor;

    conversor.leerDistancia();

    conversor.convertirAMetros();

    conversor.mostrarDistanciaEnMetros();

    return 0;
}