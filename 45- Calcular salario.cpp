#include <iostream>
using namespace std;

int main() {
  double horasTrabajadas;
  double tarifaPorHora;
  double salario = 0;

  cout << "Ingrese el número de horas trabajadas: ";
  cin >> horasTrabajadas;

  cout << "Ingrese la tarifa por hora: ";
  cin >> tarifaPorHora;

  if (horasTrabajadas > 40) {
    double horasExtras = horasTrabajadas - 40;
    salario = tarifaPorHora * 40 + (tarifaPorHora * 1.25 * horasExtras);
  } else {
    salario = tarifaPorHora * horasTrabajadas;
  }

  cout << "El salario del trabajador es: " << salario << endl;

  return 0;
}


