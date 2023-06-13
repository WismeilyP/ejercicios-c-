#include <iostream>

class CalculadoraDescuento {
public:
    void calcularDescuento() {
        double cantidadComprada;
        double precioCompra;
        double precioPagado;

        std::cout << "Ingrese la cantidad comprada: ";
        std::cin >> cantidadComprada;

        std::cout << "Ingrese el precio de compra: ";
        std::cin >> precioCompra;

        std::cout << "Ingrese el precio pagado: ";
        std::cin >> precioPagado;

        double cantidadDescontada = precioCompra - precioPagado;
        double porcentajeDescuento = (cantidadDescontada / precioCompra) * 100;

        std::cout << "El porcentaje de descuento es: " << porcentajeDescuento << "%" << std::endl;
    }
};

int main() {
    CalculadoraDescuento calculadora;

    calculadora.calcularDescuento();

    return 0;
}