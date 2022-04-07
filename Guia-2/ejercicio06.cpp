#include <iostream>
using namespace std;

int main()
{

    int numeroUno, numeroDos, numeroTres;

    cout << "Ingrese un número: ";
    cin >> numeroUno;
    cout << "Ingrese otro número: ";
    cin >> numeroDos;
    cout << "Ingrese otro número: ";
    cin >> numeroTres;

    if (numeroUno == numeroDos && numeroUno == numeroTres)
    {
        cout << "Los tres números son iguales";
    }

    return 0;
}