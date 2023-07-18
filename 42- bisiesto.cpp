#include <iostream>
using namespace std;

bool esAnioBisiesto(int anio) {
  if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int anio;

  cout << "Ingrese un año: ";
  cin >> anio;

  if (esAnioBisiesto(anio)) {
    cout << "Es año bisiesto" << endl;
  } else {
    cout << "No es año bisiesto" << endl;
  }

  return 0;
}



