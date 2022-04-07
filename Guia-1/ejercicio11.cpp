#include <iostream>
using namespace std;

int main()
{
    int minutos, conversionMinutos, horas, conversionHoras, dias;
    cout << "Ingrese la cantidad de minutos: ";
    cin >> minutos;
    conversionMinutos = minutos % 60;
    horas = (minutos - conversionMinutos) / 60;
    conversionHoras = horas % 24;
    dias = (horas - conversionHoras) / 24;
    cout << endl;
    cout << "La cantidad de días es de " << dias << " días.";
    cout << endl;
    cout << "La cantidad de horas es de " << conversionHoras << " hs.";
    cout << endl;
    cout << "La cantidad de minutos es de " << conversionMinutos << " min.";
    return 0;
}