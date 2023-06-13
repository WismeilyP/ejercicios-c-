#include <iostream>

class ConversorDistancia {
public:
    void convertirDistancia() {
        const double FACTOR_METROS = 1852;
        double distancia;

        std::cout << "Ingrese la distancia en millas marinas: ";
        std::cin >> distancia;

        double distanciaMetros = distancia * FACTOR_METROS;
        double distanciaPies = distanciaMetros * 3.28084;
        double distanciaNudos = distancia / 1.15078;

        std::cout << "La distancia en metros es: " << distanciaMetros << std::endl;
        std::cout << "La distancia en pies es: " << distanciaPies << std::endl;
        std::cout << "La distancia en nudos es: " << distanciaNudos << std::endl;
    }
};

int main() {
    ConversorDistancia conversor;

    conversor.convertirDistancia();

    return 0;
}