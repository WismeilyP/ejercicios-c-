#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double numero, indice;

  cout << "Ingrese el número: ";
  cin >> numero;

  cout << "Ingrese el índice de la raíz: ";
  cin >> indice;

  double raiz;

  if (indice == 2) {
    raiz = sqrt(numero);
  } else {
    raiz = pow(numero, 1.0 / indice);
  }

  cout << "La raíz " << indice << " de " << numero << " es: " << raiz << endl;

  return 0;
}



