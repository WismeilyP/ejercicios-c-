#include <iostream>
using namespace std;

class Cuadrado {
public:
  double lado;

  double calcularArea() {
    return lado * lado;
  }
};

int main() {
  Cuadrado cuadrado;

  cout << "Ingrese el valor del lado del cuadrado: ";
  cin >> cuadrado.lado;

  double area = cuadrado.calcularArea();

  cout << "El area del cuadrado es: " << area << endl;

  return 0;
}

