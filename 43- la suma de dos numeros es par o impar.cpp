#include <iostream>
using namespace std;

int main() {
  int numero1, numero2;

  cout << "Ingrese el primer número: ";
  cin >> numero1;

  cout << "Ingrese el segundo número: ";
  cin >> numero2;

  int suma = numero1 + numero2;

  if (suma % 2 == 0) {
    cout << "La suma es par" << endl;
  } else {
    cout << "La suma es impar" << endl;
  }

  return 0;
}



