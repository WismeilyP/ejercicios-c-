#include <iostream>
using namespace std;

int esPrimo(int numero) {
  for (int contador = 2; contador < numero; contador++) {
    if (numero % contador == 0) {
      return 0; // No es primo
    }
  }
  return 1; // Es primo
}

int main() {
  int numero;

  cout << "Ingrese un numero: ";
  cin >> numero;

  int resultado = esPrimo(numero);

  if (resultado == 1) {
    cout << "El numero es primo" << endl;
  } else {
    cout << "El numero no es primo" << endl;
  }

  return 0;
}

