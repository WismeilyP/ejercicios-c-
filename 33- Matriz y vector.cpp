#include <iostream>
#include <vector>
using namespace std;

bool esPrimo(int num) {
  if (num <= 1) {
    return false;
  }

  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      return false;
    }
  }

  return true;
}

int contarPrimos(vector<vector<int>>& matriz, vector<int>& vector) {
  int cantidadPrimos = 0;

  for (int i = 0; i < matriz.size(); i++) {
    for (int j = 0; j < matriz[i].size(); j++) {
      if (esPrimo(matriz[i][j])) {
        cantidadPrimos++;
      }
    }
  }

  for (int i = 0; i < vector.size(); i++) {
    if (esPrimo(vector[i])) {
      cantidadPrimos++;
    }
  }

  return cantidadPrimos;
}

int main() {
  // Leer la matriz
  vector<vector<int>> matriz;
  // ... código para leer la matriz ...

  // Leer el vector
  vector<int> vector;
  // ... código para leer el vector ...

  // Contar la cantidad de números primos
  int cantidadPrimos = contarPrimos(matriz, vector);

  // Mostrar el resultado
  cout << "La cantidad de números primos es: " << cantidadPrimos << endl;

  return 0;
}




