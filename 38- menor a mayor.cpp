#include <iostream>
using namespace std;

void ordenarVector(int vector[], int tamano) {
  for (int i = 0; i < tamano - 1; i++) {
    for (int j = 0; j < tamano - i - 1; j++) {
      if (vector[j] < vector[j + 1]) {
        // Intercambiar los elementos
        int temp = vector[j];
        vector[j] = vector[j + 1];
        vector[j + 1] = temp;
      }
    }
  }
}

int main() {
  int tamano;

  cout << "Ingrese el tamaño del vector: ";
  cin >> tamano;

  int vector[tamano];

  cout << "Ingrese los elementos del vector:" << endl;
  for (int i = 0; i < tamano; i++) {
    cout << "Elemento " << i + 1 << ": ";
    cin >> vector[i];
  }

  ordenarVector(vector, tamano);

  cout << "Vector ordenado de mayor a menor:" << endl;
  for (int i = 0; i < tamano; i++) {
    cout << vector[i] << " ";
  }
  cout << endl;

  return 0;
}



