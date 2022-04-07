#include <iostream>
using namespace std;

int main()
{
    int montoCajaHuevos, montoUnidadHuevos, huevos, unidadHuevos, cajaHuevos, totalAPagar;
    montoCajaHuevos = 100;
    montoUnidadHuevos = 12;
    cout << "Ingrese la cantidad de huevos a comprar: ";
    cin >> huevos;
    unidadHuevos = huevos % 12;
    cajaHuevos = (huevos - unidadHuevos) / 12;
    totalAPagar = (cajaHuevos * montoCajaHuevos) + (unidadHuevos * montoUnidadHuevos);
    cout << endl;
    cout << "La cantidad a pagar es de $" << totalAPagar;
    return 0;
}