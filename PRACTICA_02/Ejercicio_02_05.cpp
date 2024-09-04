// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 03/09/2024
// Número de ejercicio: 5
// Problema planteado: /* Leer un año y un mes (como número) y realizar una función para determinar cuántos días tiene ese mes considerando si el año es bisiesto.*/

#include <iostream>
using namespace std;

bool esBisiesto(int año);
int diasEnMes(int año, int mes);

int main() 
{
    int año, mes;
    cout << "Ingresa el año: ";
    cin >> año;
    cout << "Ingresa el mes (como número 1-12): ";
    cin >> mes;
    int dias = diasEnMes(año, mes);

    if (dias > 0) 
    {
        cout << "El mes " << mes << " del año " << año << " tiene " << dias << " días." << endl;
    } else 
    {
        cout << "Mes no válido." << endl;
    }
    return 0;
}
bool esBisiesto(int año) 
{
    return (año % 4 == 0 && año % 100 != 0) || (año % 400 == 0);
}

int diasEnMes(int año, int mes) 
{
    switch (mes) 
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return esBisiesto(año) ? 29 : 28;
        default:
            return 0; 
    }
}