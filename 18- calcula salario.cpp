#include <iostream>
using namespace std;

class Empleado {
public:
  double horasTrabajadas;
  double valorHora;

  double calcularSalario() {
    return horasTrabajadas * valorHora;
  }
};

int main() {
  Empleado empleado;

  cout << "Ingrese el numero de horas trabajadas: ";
  cin >> empleado.horasTrabajadas;

  cout << "Ingrese el valor por hora: ";
  cin >> empleado.valorHora;

  double salario = empleado.calcularSalario();

  cout << "El salario es: $" << salario << endl;

  return 0;
}



