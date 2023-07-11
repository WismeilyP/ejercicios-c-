#include <iostream>
using namespace std;

void tablaMultiplicar(int numero) {
  for (int contador = 0; contador <= 10; contador++) {
    int resultado = numero * contador;
    cout << numero << " x " << contador << " = " << resultado << endl;
  }
}

int main() {
  int numero;

  cout << "Ingrese un numero entero: ";
  cin >> numero;

  tablaMultiplicar(numero);

  return 0;
}

