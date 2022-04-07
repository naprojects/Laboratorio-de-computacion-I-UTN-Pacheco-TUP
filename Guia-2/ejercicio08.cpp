/*
Ingresar por teclado la longitud de los tres lados de un triángulo y luego listar que tipo de
triángulo es:

- Equilátero: si los tres lados son iguales.
- Isósceles: si dos de los tres lados son iguales.
- Escaleno: si los tres lados son distintos entre sí.
*/

#include <iostream>
using namespace std;

int main()
{

    int ladoA, ladoB, ladoC;

    cout << "Ingrese la longitud del primer lado: ";
    cin >> ladoA;
    cout << "Ingrese la logitud del segundo lado: ";
    cin >> ladoB;
    cout << "Ingrese la longitud del tercer lado: ";
    cin >> ladoC;

    if (ladoA == ladoB && ladoB == ladoC)
    {
        cout << "El triángulo es equilátero";
    }
    else
    {
        if (ladoA == ladoB || ladoB == ladoC || ladoA == ladoC)
        {
            cout << "El triángulo es isósceles";
        }
        else
        {
            cout << "El triángulo es escaleno";
        }
    }

    return 0;
}
