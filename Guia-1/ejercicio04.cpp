#include <iostream>
using namespace std;

int main()
{
    int cantidadDisponibles, cantidadVendidos, noOcupados;
    float porcentajeOcupacion, porcentajeNoOcupacion;

    cout << "Ingrese la cantidad de asientos disponibles: ";
    cin >> cantidadDisponibles;

    cout << "Ingrese la cantidad de asientos vendidos: ";
    cin >> cantidadVendidos;

    noOcupados = cantidadDisponibles - cantidadVendidos;
    porcentajeOcupacion = cantidadVendidos * 100 / (float)cantidadDisponibles; // casteo
    porcentajeNoOcupacion = 100 - porcentajeOcupacion;

    cout << "Porcentaje de ocupación: " << porcentajeOcupacion << "%";
    cout << endl;
    cout << "Porcentaje de no ocupación: " << porcentajeNoOcupacion << "%";
    return 0;
}