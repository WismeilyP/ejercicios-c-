#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre, apellido;
  int edad;
  long long numeroCelular;

  cout << "Ingrese su nombre: ";
  getline(cin, nombre);

   cout << "Ingrese su apellido: "
  getline(cin, apellido);

     cout << "Ingrese su edad: ";
  cin >> edad;

     cout << "Ingrese su número de celular: ";
  cin >> numeroCelular;

    cout << "Datos ingresados:" << endl;
  cout << "Nombre: " << nombre << endl;
  cout << "Apellido: " << apellido << endl;
     cout << "Edad: " << edad << endl;
  cout << "Número de celular: " << numeroCelular << endl;

  return 0;
}





