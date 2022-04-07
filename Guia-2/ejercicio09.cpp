/*
Hacer un programa para ingresar tres números y listar el máximo de ellos.
*/

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

    if (numeroUno > numeroDos && numeroDos > numeroTres)
    {
        cout << "El número mayor es " << numeroUno;
    }
    else
    {
        if (numeroDos > numeroUno && numeroDos > numeroTres)
        {
            cout << "El número mayor es " << numeroDos;
        }
        else
        {
            cout << "El número mayor es " << numeroTres;
        }
    }

    return 0;
}