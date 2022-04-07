#include <iostream>
using namespace std;

int main()
{

    int numeroUno, numeroDos, diferenciaAbsoluta;

    cout << "Ingrese un número: ";
    cin >> numeroUno;
    cout << "Ingrese otro número: ";
    cin >> numeroDos;

    if (numeroUno && numeroDos >= 0)
    {
        if (numeroUno > numeroDos)
        {
            diferenciaAbsoluta = numeroUno - numeroDos;
            cout << "La diferencia absoluta es de: " << diferenciaAbsoluta;
        }
        else
        {
            diferenciaAbsoluta = numeroDos - numeroUno;
            cout << "La diferencia absoluta es de: " << diferenciaAbsoluta;
        }
    }
    else
    {
        if (numeroUno > numeroDos)
        {
            diferenciaAbsoluta = numeroUno - (numeroDos);
            cout << "La diferencia absoluta es de: " << diferenciaAbsoluta;
        }
        else
        {
            diferenciaAbsoluta = numeroDos - (numeroUno);
            cout << "La diferencia absoluta es de: " << diferenciaAbsoluta;
        }
    }

    return 0;
}