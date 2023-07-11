#include <iostream>
using namespace std;

class Rectangulo {
public:
  double base;
  double altura;

  double calcularArea() {
    return base * altura;
  }

  double calcularPerimetro() {
    return 2 * (base + altura);
  }
};

int main() {
  Rectangulo rectangulo;

  cout << "Ingrese la base del rectangulo: ";
  cin >> rectangulo.base;

  cout << "Ingrese la altura del rectangulo: ";
  cin >> rectangulo.altura;

  double area = rectangulo.calcularArea();
  double perimetro = rectangulo.calcularPerimetro();

  cout << "El area del rectangulo es: " << area << endl;
  cout << "El perimetro del rectangulo es: " << perimetro << endl;

  return 0;
}
