#include <iostream>
using namespace std;

int main() {
  int numero1, numero2;

  cout << "Ingrese el primer número: ";
  cin >> numero1;

  cout << "Ingrese el segundo número: ";
  cin >> numero2;

  if (numero1 % numero2 == 0) {
    cout << "Es divisible" << endl;
  } else {
    cout << "No es divisible" << endl;
  }

  return 0;
}



