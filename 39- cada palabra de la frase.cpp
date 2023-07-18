#include <iostream>
#include <string>
using namespace std;

int main() {
  string frase;
  cout << "Ingrese una frase: ";
  getline(cin, frase);

  int inicioPalabra = 0;
  int totalPalabras = 0;

  for (int i = 0; i <= frase.length(); i++) {
    if (frase[i] == ' ' || i == frase.length()) {
      string palabra = frase.substr(inicioPalabra, i - inicioPalabra);
      cout << palabra << " - " << palabra.length() << " letras" << endl;
      inicioPalabra = i + 1;
      totalPalabras++;
    }
  }

  cout << "Total de palabras: " << totalPalabras << endl;

  return 0;
}



