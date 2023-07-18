#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double base, altura, area;
  double lado1, lado2, lado3;

  cout << "Ingrese la base del triángulo: ";
  cin >> base;

  cout << "Ingrese la altura del triángulo: ";
  cin >> altura;

  area = (base * altura) / 2;

  if (area > 1000) {
    cout << "DATOS NO VALIDOS" << endl;
  } else {
    cout << "Ingrese el lado 1 del triángulo: ";
    cin >> lado1;

    cout << "Ingrese el lado 2 del triángulo: ";
    cin >> lado2;

    cout << "Ingrese el lado 3 del triángulo: ";
    cin >> lado3;

    if (lado1 == lado2 && lado2 == lado3) {
      cout << "El triángulo es equilátero" << endl;
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
      cout << "El triángulo es isósceles" << endl;
    } else {
      cout << "El triángulo es escaleno" << endl;
    }

    cout << "El área del triángulo es: " << area << endl;
  }

  return 0;
}





