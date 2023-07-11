#include <iostream>
using namespace std;

int main() {
  double numero1, numero2, numero3;

  cout << "Ingrese el primer numero: ";
  cin >> numero1;

  cout << "Ingrese el segundo numero: ";
  cin >> numero2;

  cout << "Ingrese el tercer numero: ";
  cin >> numero3;

  double suma = numero1 + numero2 + numero3;
  double multiplicacion = numero1 * numero2 * numero3;

  cout << "La suma de los numeros es: " << suma << endl;
  cout << "La multiplicacion de los numeros es: " << multiplicacion << endl;

  return 0;
}