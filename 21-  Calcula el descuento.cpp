#include <iostream>
using namespace std;

class Descuento {
public:
  double monto;

  void calcularDescuento() {
    double descuento;
    double montoFinal;

    if (monto > 10000) {
      descuento = monto * 0.2;
    } else {
      descuento = monto * 0.1;
    }

    montoFinal = monto - descuento;

    cout << "Descuento: $" << descuento << endl;
    cout << "Monto final: $" << montoFinal << endl;
  }
};

int main() {
  Descuento descuento;

  cout << "Ingrese el monto: ";
  cin >> descuento.monto;

  descuento.calcularDescuento();

  return 0;
}



