#include <iostream>
using namespace std;

int main()
{
    float semanaUno, semanaDos, semanaTres, semanaCuatro, totalRecaudadoMes, promedioMes, porcentajeSemanaUno, porcentajeSemanaDos, porcentajeSemanaTres, porcentajeSemanaCuatro;
    cout << "Ingrese el monto de recaudación total de la semana 1: ";
    cin >> semanaUno;
    cout << "Ingrese el monto de recaudación total de la semana 2: ";
    cin >> semanaDos;
    cout << "Ingrese el monto de recaudación total de la semana 3: ";
    cin >> semanaTres;
    cout << "Ingrese el monto de recaudación total de la semana 4: ";
    cin >> semanaCuatro;
    totalRecaudadoMes = semanaUno + semanaDos + semanaTres + semanaCuatro;
    promedioMes = totalRecaudadoMes / 4;
    porcentajeSemanaUno = semanaUno * 100 / totalRecaudadoMes;
    porcentajeSemanaDos = semanaDos * 100 / totalRecaudadoMes;
    porcentajeSemanaTres = semanaTres * 100 / totalRecaudadoMes;
    porcentajeSemanaCuatro = 100 - (porcentajeSemanaUno + porcentajeSemanaDos + porcentajeSemanaTres);
    cout << endl;
    cout << "El promedio de recaudación mensual es de $" << promedioMes;
    cout << endl;
    cout << "El porcentaje de la primera semana es de " << porcentajeSemanaUno << "%";
    cout << endl;
    cout << "El porcentaje de la segunda semana es de " << porcentajeSemanaDos << "%";
    cout << endl;
    cout << "El porcentaje de la tercera semana es de " << porcentajeSemanaTres << "%";
    cout << endl;
    cout << "El porcentaje de la cuarta semana es de " << porcentajeSemanaCuatro << "%";
    return 0;
}