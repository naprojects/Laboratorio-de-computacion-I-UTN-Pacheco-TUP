#include <iostream>
using namespace std;

int main()
{
    int horas, horasConversion, dias;
    cout << "Ingrese la cantidad de horas: ";
    cin >> horas;
    horasConversion = horas % 24;
    dias = (horas - horasConversion) / 24;
    cout << endl;
    cout << "La cantidad de días es de " << dias << " días.";
    cout << endl;
    cout << "La cantidad de horas es de " << horasConversion << " hs.";
    return 0;
}