#include <iostream>
using namespace std;

int main()
{
    int monto, mil, quinientos, doscientos, cien, montoRestante, montoRestanteDos, montoRestanteTres;
    cout << "Ingrese el monto a retirar del cajero: ";
    cin >> monto;
    mil = (monto - (monto % 1000)) / 1000;
    montoRestante = monto % 1000;
    quinientos = (montoRestante - (montoRestante % 500)) / 500;
    montoRestanteDos = montoRestante % 500;
    doscientos = (montoRestanteDos - (montoRestanteDos % 200)) / 200;
    montoRestanteTres = montoRestanteDos % 200;
    cien = (montoRestanteTres - (montoRestanteTres % 100)) / 100;
    cout << "Billetes de 1000: " << mil;
    cout << endl;
    cout << "Billetes de 500: " << quinientos;
    cout << endl;
    cout << "Billetes de 200: " << doscientos;
    cout << endl;
    cout << "Billetes de 100: " << cien;
}