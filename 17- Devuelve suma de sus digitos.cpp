#include <iostream>
using namespace std;

int sumarDigitos(int numero) {
  int suma = 0;

  while (numero > 0) {
    int digito = numero % 10;
    suma += digito;
    numero /= 10;
  }

  return suma;
}

int main() {
  int numero;

  cout << "Ingrese un numero: ";
  cin >> numero;

  int resultado = sumarDigitos(numero);

  cout << "La suma de los digitos del numero es: " << resultado << endl;

  return 0;
}


