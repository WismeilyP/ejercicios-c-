#include <iostream>
using namespace std;

class Conversor {
public:
  double centimetros;

  double convertirAPulgadas() {
    return centimetros / 2.54;
  }
};

int main() {
  Conversor conversor;

  cout << "Ingrese la medida en centimetros: ";
  cin >> conversor.centimetros;

  double pulgadas = conversor.convertirAPulgadas();

  cout << "La medida en pulgadas es: " << pulgadas << endl;

  return 0;
}

