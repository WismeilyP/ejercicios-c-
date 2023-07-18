#include <iostream>
using namespace std;

int main() {
  int tamano;

  cout << "Ingrese el tamaño de los vectores: ";
  cin >> tamano;

  int vector1[tamano];
  int vector2[tamano];

  cout << "Ingrese los elementos del primer vector:" << endl;
  for (int i = 0; i < tamano; i++) {
    cout << "Elemento " << i + 1 << ": ";
    cin >> vector1[i];
  }

  cout << "Ingrese los elementos del segundo vector:" << endl;
  for (int i = 0; i < tamano; i++) {
    cout << "Elemento " << i + 1 << ": ";
    cin >> vector2[i];
  }

  int productoEscalar = 0;

  for (int i = 0; i < tamano; i++) {
    productoEscalar += vector1[i] * vector2[i];
  }

  cout << "El producto escalar es: " << productoEscalar << endl;

  return 0;
}






