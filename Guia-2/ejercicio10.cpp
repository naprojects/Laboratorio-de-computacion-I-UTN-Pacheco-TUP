/*
Hacer un programa para ingresar cinco números y listar el máximo de ellos.
*/

#include <iostream>
using namespace std;

int main()
{

    int numeroUno, numeroDos, numeroTres, numeroCuatro, numeroCinco, maximo;

    cout << "Ingrese un número: ";
    cin >> numeroUno;
    cout << "Ingrese otro número: ";
    cin >> numeroDos;
    cout << "Ingrese otro número: ";
    cin >> numeroTres;
    cout << "Ingrese otro número: ";
    cin >> numeroCuatro;
    cout << "Ingrese otro número: ";
    cin >> numeroCinco;

    maximo = numeroUno;

    if (numeroDos > maximo)
    {
        maximo = numeroDos;
    }

    if (numeroTres > maximo)
    {
        maximo = numeroTres;
    }

    if (numeroCuatro > maximo)
    {
        maximo = numeroCuatro;
    }

    if (numeroCinco > maximo)
    {
        maximo = numeroCinco;
    }

    cout << "El número mayor es: " << maximo;

    return 0;
}