#include <iostream>
using namespace std;

class Trabajador {
public:
  double sueldo;

  void calcularDescuentoYSueldoNeto() {
    double descuento = 0;
    double sueldoNeto;

    if (sueldo <= 1000) {
      descuento = sueldo * 0.1;
    } else if (sueldo > 1000 && sueldo <= 2000) {
      double adicional = sueldo - 1000;
      descuento = adicional * 0.05;
    } else if (sueldo > 2000) {
      double adicional = sueldo - 2000;
      descuento = adicional * 0.03;
    }

    sueldoNeto = sueldo - descuento;

    cout << "Descuento: $" << descuento << endl;
    cout << "Sueldo neto: $" << sueldoNeto << endl;
  }
};

int main() {
  Trabajador trabajador;

  cout << "Ingrese el sueldo del trabajador: ";
  cin >> trabajador.sueldo;

  trabajador.calcularDescuentoYSueldoNeto();

  return 0;
}




