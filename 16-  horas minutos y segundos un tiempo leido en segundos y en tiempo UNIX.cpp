#include <iostream>
using namespace std;

class Tiempo {
public:
  int segundos;

  void convertirTiempo() {
    int horas, minutos, segundosRestantes;

    horas = segundos / 3600;
    segundosRestantes = segundos % 3600;
    minutos = segundosRestantes / 60;
    segundosRestantes = segundosRestantes % 60;

    cout << "Tiempo en formato HH:MM:SS -> " << horas << ":" << minutos << ":" << segundosRestantes << endl;
  }

  void convertirTiempoUNIX() {
    const int UNIX_EPOCH = 1970; // Año de referencia UNIX
    int tiempoUNIX = segundos + (UNIX_EPOCH * 365 * 24 * 3600);

    cout << "Tiempo en formato UNIX -> " << tiempoUNIX << endl;
  }
};

int main() {
  Tiempo tiempo;

  cout << "Ingrese el tiempo en segundos: ";
  cin >> tiempo.segundos;

  tiempo.convertirTiempo();
  tiempo.convertirTiempoUNIX();

  return 0;
}


