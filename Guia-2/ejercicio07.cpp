/*

Hacer un programa para ingresar por teclado tres números e informar con una leyenda aclaratoria si los tres son todos distintos entre sí, caso contrario no emitir nada.

Ayuda: Si A es distinto de B y B es distinto de C, es no sígnica que A y C sean distintos.
Ejemplo: A=8, B=6 y C=8.

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

    if (numeroUno != numeroDos && numeroUno != numeroTres && numeroTres != numeroDos)
    {
        cout << "Los tres números son distintos estre sí";
    }

    return 0;
}