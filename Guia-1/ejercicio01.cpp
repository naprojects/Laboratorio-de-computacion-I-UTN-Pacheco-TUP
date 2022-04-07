#include <iostream>
using namespace std;

int main()
{
    float horasTrabajadas, valorHora, sueldo;
    cout << "Ingrese la cantidad de horas trabajadas por el operario: ";
    cin >> horasTrabajadas;
    cout << "ingrese el valor hora: ";
    cin >> valorHora;
    cout << endl;
    sueldo = valorHora * horasTrabajadas;
    cout << "El sueldo del operario es de $" << sueldo;
    return 0;
}