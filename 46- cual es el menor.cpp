#include <iostream>
using namespace std;

int main() {
  double numero1, numero2, numero3;
  double menor, mayor;

  cout << "Ingrese el primer número: ";
  cin >> numero1;

  cout << "Ingrese el segundo número: ";
  cin >> numero2;

  cout << "Ingrese el tercer número: ";
  cin >> numero3;

  // Inicializar las variables menor y mayor con el primer número ingresado
  menor = numero1;
  mayor = numero1;

  // Comparar el segundo número con menor y mayor
  if (numero2 < menor) {
    menor = numero2;
  }
  if (numero2 > mayor) {
    mayor = numero2;
  }

  // Comparar el tercer número con menor y mayor
  if (numero3 < menor) {
    menor = numero3;
  }
  if (numero3 > mayor) {
    mayor = numero3;
  }

  cout << "El número menor es: " << menor << endl;
  cout << "El número mayor es: " << mayor << endl;

  return 0;
}


