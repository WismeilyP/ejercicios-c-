#include <iostream>
using namespace std;

int main() {
  double consumo;

  cout << "Ingrese el consumo de energía en kW: ";
  cin >> consumo;

  double porcentaje = (consumo / 10000) * 100;

  if (porcentaje >= 80 && porcentaje <= 100) {
    cout << "CONSUMO MEDIO" << endl;
  } else if (porcentaje > 100) {
    cout << "ALTO CONSUMO DE ENERGIA" << endl;
  }

  return 0;
}




