#include <iostream>
using namespace std;

int main()
{
    int A, B, newA, newB;
    cout << "Ingrese un número: ";
    cin >> A;
    cout << "Ingrese otro número: ";
    cin >> B;
    cout << "Los valores ingresados son: ";
    cout << endl;
    cout << "A: " << A;
    cout << endl;
    cout << "B: " << B;
    cout << endl;
    newA = B;
    newB = A;
    cout << "El nuevo valor de A es: " << newA;
    cout << endl;
    cout << "El nuevo valor de B es: " << newB;
    return 0;
}