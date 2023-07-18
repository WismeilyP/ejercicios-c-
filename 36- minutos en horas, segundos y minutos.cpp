#include <iostream>
using namespace std;

int main() {
  int tiempoMinutos;

  cout << "Ingrese el tiempo en minutos: ";
  cin >> tiempoMinutos;

  int horas = tiempoMinutos / 60;
  int minutos = tiempoMinutos % 60;
  int segundos = tiempoMinutos % 60;

  cout << "Tiempo convertido: " << horas << " horas, " << minutos << " minutos, " << segundos << " segundos" << endl;

  return 0;
}







