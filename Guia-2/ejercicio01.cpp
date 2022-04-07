#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero == 0)
    {
        cout << "El número es cero";
    }
    else
    {
        if (numero > 0)
        {
            cout << "El número es positivo";
        }
        else
        {
            cout << "El número es negativo";
        }
    }

    return 0;
}