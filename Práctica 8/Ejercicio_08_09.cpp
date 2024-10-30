// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 29/10/2024
// Número de ejercicio: 9
// Problema planteado: /*Desarrolla un programa que permita al usuario ingresar una matriz m x n. Determina si la matriz es esparsa, es decir, si la mayoría de sus elementos son ceros (por ejemplo, si más del 50% de los elementos son cero). Los elementos deben ser generados aleatoriamente del 0 al 10.*/
#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() 
{
    int m, n;
    cout << "Ingrese el numero de filas: ";
    cin >> m;
    cout << "Ingrese el numero de columnas: ";
    cin >> n;
    vector<vector<int>> matriz(m, vector<int>(n));
    srand(time(NULL));
    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            matriz[i][j] = rand() % 11; 
        }
    }
    cout << "Matriz generada:\n";
    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            cout << matriz[i][j] << "\t"; 
        }
        cout << endl; 
    }
    int contadorCeros = 0;
    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            if (matriz[i][j] == 0) 
            {
                contadorCeros++;
            }
        }
    }
    return 0;
}
