#include <iostream>
using namespace std;

int main() {
  double voltaje1, voltaje2, voltaje3;
  double promedio;

  cout << "Ingrese el primer voltaje: ";
  cin >> voltaje1;

  cout << "Ingrese el segundo voltaje: ";
  cin >> voltaje2;

  cout << "Ingrese el tercer voltaje: ";
  cin >> voltaje3;

  promedio = (voltaje1 + voltaje2 + voltaje3) / 3;

  if (promedio < 115) {
    cout << "VOLTAJE CORRECTO" << endl;
  } else if (promedio >= 115 && promedio < 220) {
    cout << "ALTO VOLTAJE" << endl;
  } else {
    cout << "PELIGRO" << endl;
  }

  return 0;
}





