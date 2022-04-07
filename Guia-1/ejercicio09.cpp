#include <iostream>
using namespace std;

int main()
{
    int minutos, minutosConversion, horas;
    cout << "Ingrese la cantidad de minutos a convertir en horas y minutos: ";
    cin >> minutos;
    minutosConversion = minutos % 60;
    horas = (minutos - minutosConversion) / 60;
    cout << endl;
    cout << "La cantidad de horas es de " << horas << " hs";
    cout << endl;
    cout << "La cantidad de minutos es de " << minutosConversion << " min";
    return 0;
}