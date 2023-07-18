#include <iostream>
using namespace std;

int main() {
  double valor1, valor2;

  cout << "Ingrese el primer valor: ";
  cin >> valor1;

  cout << "Ingrese el segundo valor: ";
  cin >> valor2;

  double suma = valor1 + valor2;
  double resta = valor1 - valor2;

  if (fmod(suma, resta) == 0) {
    cout << "La división es exacta" << endl;
  } else {
    cout << "La división no es exacta" << endl;
  }

  return 0;
}




