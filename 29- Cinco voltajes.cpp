#include <iostream>
using namespace std;

int main() {
  double voltaje1, voltaje2, voltaje3, voltaje4, voltaje5;
  double promedio;

  cout << "Ingrese el voltaje 1: ";
  cin >> voltaje1;

  cout << "Ingrese el voltaje 2: ";
  cin >> voltaje2;

  cout << "Ingrese el voltaje 3: ";
  cin >> voltaje3;

  cout << "Ingrese el voltaje 4: ";
  cin >> voltaje4;

  cout << "Ingrese el voltaje 5: ";
  cin >> voltaje5;

  promedio = (voltaje1 + voltaje2 + voltaje3 + voltaje4 + voltaje5) / 5;

  if (promedio > 220) {
    cout << "ALTO VOLTAJE" << endl;
  } else {
    cout << "VOLTAJE CORRECTO" << endl;
  }

  return 0;
}




