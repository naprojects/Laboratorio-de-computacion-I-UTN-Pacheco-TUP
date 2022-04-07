/*
Hacer un programa para ingresar cinco números y listar cuántos de esos cinco
números son positivos.
*/

#include <iostream>
using namespace std;

int main()
{

    int numeroUno, numeroDos, numeroTres, numeroCuatro, numeroCinco, contador;

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

    contador = 0;

    if (numeroUno > 0)
    {
        contador += 1;
    }

    if (numeroDos > 0)
    {
        contador += 1;
    }

    if (numeroTres > 0)
    {
        contador += 1;
    }

    if (numeroCuatro > 0)
    {
        contador += 1;
    }

    if (numeroCinco > 0)
    {
        contador += 1;
    }

    cout << "La cantidad de números positivos son: " << contador;

    return 0;
}