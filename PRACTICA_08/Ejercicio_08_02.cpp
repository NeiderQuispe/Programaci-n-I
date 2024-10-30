// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 29/10/2024
// Número de ejercicio: 2
// Problema planteado: 
/* Un arreglo constante contiene la producción en toneladas métricas de 6 minerales, y otro contiene los nombres de estos minerales, para obtener:
- Buscar por nombre de mineral y desplegar la producción
- Ordenar del mayor al menor (producción) y mostrar:
Mineral Produccion ™
SN 998.000
SB 876.500
AU 786.670
PT 636.143
AG 135.567
CU 109.412 */
#include <iostream>
#include <string>
using namespace std;
const int NUM_MINERALES = 6;
const string nombresMinerales[NUM_MINERALES] = {"SN", "SB", "AU", "PT", "AG", "CU"};
const double produccionMinerales[NUM_MINERALES] = {998.0, 876.5, 786.67, 636.143, 135.567, 109.412};
void buscarProduccionPorNombre(const string& nombre);
void ordenarYMostrar();
int main() 
{
    string nombreMineral;
    cout << "Ingrese el nombre del mineral para buscar su producción (SN, SB, AU, PT, AG, CU): ";
    cin >> nombreMineral;
    buscarProduccionPorNombre(nombreMineral);
    ordenarYMostrar();
    return 0;
}
void buscarProduccionPorNombre(const string& nombre) 
{
    bool encontrado = false;
    for (int i = 0; i < NUM_MINERALES; ++i) 
    {
        if (nombresMinerales[i] == nombre) 
        { 
            cout << "Producción de " << nombre << ": " << produccionMinerales[i] << " ™" << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) 
    {
        cout << "Mineral no encontrado." << endl;
    }
}
void ordenarYMostrar() 
{
    string nombres[NUM_MINERALES];
    double produccion[NUM_MINERALES];

    for (int i = 0; i < NUM_MINERALES; ++i) 
    {
        nombres[i] = nombresMinerales[i];
        produccion[i] = produccionMinerales[i];
    }
    for (int i = 0; i < NUM_MINERALES - 1; ++i) 
    {
        for (int j = i + 1; j < NUM_MINERALES; ++j) 
        {
            if (produccion[i] < produccion[j]) 
            {
                double tempProd = produccion[i];
                produccion[i] = produccion[j];
                produccion[j] = tempProd;
                string tempNombre = nombres[i];
                nombres[i] = nombres[j];
                nombres[j] = tempNombre;
            }
        }
    }
    cout << "\nMineral   Producción ™" << endl;
    for (int i = 0; i < NUM_MINERALES; ++i) 
    {
        cout << nombres[i] << "     " << produccion[i] << endl;
    }
}