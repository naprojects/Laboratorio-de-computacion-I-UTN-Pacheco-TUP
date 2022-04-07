/*
Hacer un programa para leer tres números diferentes y determinar e informar el
número del medio. Ejemplo: si se ingresan 6, 10, 8, se emitirá 8.
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

    if ((numeroUno > numeroDos && numeroUno < numeroTres || numeroUno < numeroDos && numeroUno > numeroTres))
    {
        cout << "El número del medio es: " << numeroUno;
    }
    else
    {
        if ((numeroDos > numeroUno && numeroDos < numeroTres) || (numeroDos < numeroUno && numeroDos > numeroTres))
        {
            cout << "El número del medio es: " << numeroDos;
        }
        else
        {
            cout << "El número del medio es: " << numeroTres;
        }
    }

    return 0;
}