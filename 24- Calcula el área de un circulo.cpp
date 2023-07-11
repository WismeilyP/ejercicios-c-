#include <iostream>
using namespace std;

int main() {
  double radio;
  double area;

  cout << "Ingrese el radio del circulo: ";
  cin >> radio;

  if (radio <= 0) {
    cout << "DATOS ERRONEOS" << endl;
  } else {
    area = 3.14159 * radio * radio;

    if (area > 5000) {
      cout << "DATOS ERRONEOS" << endl;
    } else {
      cout << "El area del circulo es: " << area << endl;
    }
  }

  return 0;
}



