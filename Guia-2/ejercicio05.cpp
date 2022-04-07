#include <iostream>
using namespace std;

int main()
{
    float importeVenta, importeFinal;
    cout << "Ingrese el importe de venta: ";
    cin >> importeVenta;

    if (importeVenta < 100)
    {
        importeFinal = importeVenta - (importeVenta * 0.05);
        cout << "El importe final es de $" << importeFinal;
    }
    else
    {
        if (importeVenta <= 500)
        {
            importeFinal = importeVenta - (importeVenta * 0.10);
            cout << "El importe final es de $" << importeFinal;
        }
        else
        {
            importeFinal = importeVenta - (importeVenta * 0.15);
            cout << "El importe final es de $" << importeFinal;
        }
    }

    return 0;
}