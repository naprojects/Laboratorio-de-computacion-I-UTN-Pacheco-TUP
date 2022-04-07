#include <iostream>
using namespace std;

int main()
{
    float alfajoresA, alfajoresB, alfajoresC, totalVendido, porcentajeA, porcentajeB, porcentajeC;
    cout << "Ingrese la cantidad vendida de ALFAJORES A: ";
    cin >> alfajoresA;
    cout << "Ingrese la cantidad vendida de ALFAJORES B: ";
    cin >> alfajoresB;
    cout << "Ingrese la cantidad vendida de ALFAJORES C: ";
    cin >> alfajoresC;
    totalVendido = alfajoresA + alfajoresB + alfajoresC;
    porcentajeA = alfajoresA * 100 / totalVendido;
    porcentajeB = alfajoresB * 100 / totalVendido;
    porcentajeC = 100 - (porcentajeA + porcentajeB);
    cout << "Porcentaje A: ";
    cout << porcentajeA;
    cout << endl;
    cout << "Porcentaje B: ";
    cout << porcentajeB;
    cout << endl;
    cout << "Porcentaje C: ";
    cout << porcentajeC;
    cout << endl;
    return 0;
}