#include <iostream>
using namespace std;

int main()
{

    int numeroUno, numeroDos;

    cout << "Ingrese un número: ";
    cin >> numeroUno;
    cout << "Ingrese otro número: ";
    cin >> numeroDos;

    if (numeroUno % numeroDos == 0)
    {
        cout << "El primer número es múltiplo del segundo";
    }
    else
    {
        cout << "El primer número no es múltiplo del segundo";
    }

    return 0;
}