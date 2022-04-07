#include <iostream>
using namespace std;

int main()
{
    int sueldoFijo, premioPorAutoVendido, cantidadAutosVendidos, sueldoTotal;
    sueldoFijo = 15000;
    premioPorAutoVendido = 2000;
    cout << "Ingrese la cantidad de autos vendidos: ";
    cin >> cantidadAutosVendidos;
    sueldoTotal = sueldoFijo + (cantidadAutosVendidos * premioPorAutoVendido);
    cout << "El sueldo total del vendedor es de $" << sueldoTotal;
    return 0;
}