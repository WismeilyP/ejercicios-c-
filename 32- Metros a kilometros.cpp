#include <iostream>
using namespace std;

int main() {
  double distanciaMetros, distanciaKm;

  cout << "Ingrese la distancia en metros: ";
  cin >> distanciaMetros;

  distanciaKm = distanciaMetros / 1000;

  cout << "La distancia en kilómetros es: " << distanciaKm << " km" << endl;

  return 0;
}




