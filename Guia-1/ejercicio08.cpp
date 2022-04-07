#include <iostream>
using namespace std;

int main()
{
    int importeSinDescuento, importeConDescuento, porcentajeDescuento;
    cout << "Ingrese el importe de venta sin descuento: ";
    cin >> importeSinDescuento;
    cout << "Ingrese el importe de venta con el descuento aplicado: ";
    cin >> importeConDescuento;
    porcentajeDescuento = 100 - (importeConDescuento * 100 / importeSinDescuento);
    cout << "El porcentaje aplicado es del " << porcentajeDescuento << "%";
    return 0;
}
