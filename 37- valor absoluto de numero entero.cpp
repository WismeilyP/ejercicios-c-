#include <iostream>
using namespace std;

int main() {
  int numero;

  cout << "Ingrese un número entero: ";
  cin >> numero;

  if (numero < 0) {
    numero *= -1;
  }

  cout << "El valor absoluto del número es: " << numero << endl;

  return 0;
}






