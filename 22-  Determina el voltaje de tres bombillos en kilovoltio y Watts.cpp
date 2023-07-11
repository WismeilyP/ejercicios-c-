#include <iostream>
using namespace std;

class Bombillo {
public:
  double voltajeEntrada;
  double factorConversion;

  void calcularVoltaje() {
    double voltajeBombillo = voltajeEntrada / factorConversion;
    double potencia = voltajeEntrada * 0.5; // Ejemplo: Se asume una corriente constante de 0.5 A

    cout << "Voltaje del bombillo en kilovoltios: " << voltajeBombillo << " kV" << endl;
    cout << "Potencia del bombillo en vatios: " << potencia << " W" << endl;
  }
};

int main() {
  Bombillo bombillo;

  bombillo.voltajeEntrada = 120.0;
  bombillo.factorConversion = 1000.0;

  bombillo.calcularVoltaje();

  return 0;
}



