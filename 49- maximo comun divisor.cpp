#include <iostream>
using namespace std;

int main() {
  int m, n;

  cout << "Ingrese el primer número (m): ";
  cin >> m;

  cout << "Ingrese el segundo número (n): ";
  cin >> n;

  int r;

  while (true) {
    r = m % n;
    if (r == 0) {
      break;
    }
    m = n;
    n = r;
  }

  cout << "El máximo común divisor (MCD) de " << m << " y " << n << " es: " << n << endl;

  return 0;
}




