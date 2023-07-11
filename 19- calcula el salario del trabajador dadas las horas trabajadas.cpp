#include <iostream>
using namespace std;

class Trabajador {
public:
  double horasTrabajadas;
  double tarifaHora;

  double calcularSalario() {
    double salario;

    if (horasTrabajadas <= 40) {
      salario = horasTrabajadas * tarifaHora;
    } else {
      double salarioBase = 40 * tarifaHora;
      double horasExtras = (horasTrabajadas - 40) * (tarifaHora * 1.5);
      salario = salarioBase + horasExtras;
    }

    return salario;
  }
};

int main() {
  Trabajador trabajador;

  cout << "Ingrese el numero de horas trabajadas: ";
  cin >> trabajador.horasTrabajadas;

  cout << "Ingrese la tarifa por hora: ";
  cin >> trabajador.tarifaHora;

  double salario = trabajador.calcularSalario();

  cout << "El salario es: $" << salario << endl;

  return 0;
}




