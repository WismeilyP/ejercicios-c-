#include <iostream>
#include <ctime>
using namespace std;

int main() {
  int diaNacimiento, mesNacimiento, anioNacimiento;
  int diaActual, mesActual, anioActual;
  int edad;

  // Obtener la fecha actual
  time_t now = time(0);
  tm* fechaActual = localtime(&now);

  // Obtener el día, mes y año actual
  diaActual = fechaActual->tm_mday;
  mesActual = fechaActual->tm_mon + 1;
  anioActual = fechaActual->tm_year + 1900;

  // Leer la fecha de nacimiento
  cout << "Ingrese la fecha de nacimiento (dd mm aaaa): ";
  cin >> diaNacimiento >> mesNacimiento >> anioNacimiento;

  // Calcular la edad
  edad = anioActual - anioNacimiento;

  // Ajustar la edad según el mes y día actual
  if (mesActual < mesNacimiento || (mesActual == mesNacimiento && diaActual < diaNacimiento)) {
    edad--;
  }

  // Mostrar la edad
  cout << "La edad es: " << edad << " años" << endl;

  return 0;
}





