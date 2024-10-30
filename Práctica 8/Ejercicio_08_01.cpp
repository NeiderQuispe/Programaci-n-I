// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 29/10/2024
// Número de ejercicio: 1
// Problema planteado: Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir de este arreglo determine la desviación típica.
#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;
double calcularDesviacionEstandar(const vector<int>& edades);
int main() 
{
    vector<int> edades; 
    int edad; 
    cout << "Ingrese las edades de las personas:" << endl;
    while (true) 
    {
        cin >> edad; 
        if (edad == -1) 
        {
            if (edades.empty()) 
            {
                cout << "No se han ingresado edades." << endl;
                return 0; 
            }
            break; 
        }
        if (edad < 0) 
        {
            cout << "Por favor, ingrese un numero positivo." << endl;
            continue; 
        }
        edades.push_back(edad);
    }
    double desviacionEstandar = calcularDesviacionEstandar(edades);
    cout << "La desviación estandar de las edades es: " << desviacionEstandar << endl;
    return 0;
}
double calcularDesviacionEstandar(const vector<int>& edades) 
{
    if (edades.empty()) 
    {
        cerr << "Error:" << endl;
        return 0; 
    }
    double suma = 0; 
    for (int edad : edades) 
    {
        suma += edad; 
    }
    double promedio = suma / edades.size(); 
    double sumaDiferencias = 0; 
    for (int edad : edades) 
    {
        sumaDiferencias += pow(edad - promedio, 2); 
    }
    return sqrt(sumaDiferencias / edades.size());
}