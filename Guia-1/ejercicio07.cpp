#include <iostream>
using namespace std;

int main()
{
    float importeVenta, porcentajeDescuento, montoDescuento, montoAPagar;
    cout << "Ingrese el importe de venta: ";
    cin >> importeVenta;
    cout << "Ingrese el porcentaje de descuento: ";
    cin >> porcentajeDescuento;
    montoDescuento = importeVenta * porcentajeDescuento / 100;
    montoAPagar = importeVenta - montoDescuento;
    cout << endl;
    cout << "El importe a pagar es de $" << montoAPagar;
    return 0;
}