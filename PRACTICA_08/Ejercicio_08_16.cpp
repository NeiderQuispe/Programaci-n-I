// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 30/10/2024
// Número de ejercicio: 16
// Problema planteado: /*Desarrolla un programa que permita al usuario ingresar una matriz de m x n cadenas (donde cada celda contiene una palabra). Luego, pide al usuario una letra y cuenta cuántas veces aparece esa letra en toda la matriz. Muestra el resultado.*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() 
{
    int m, n;
    cout << "Ingrese el numero de filas: ";
    cin >> m;
    cout << "Ingrese el numero de columnas: ";
    cin >> n;
    cin.ignore(); 
    vector<vector<string>> matriz(m, vector<string>(n)); 
    cout << "Ingrese las palabras para la matriz:" << endl;
    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            cout << "Ingrese la palabra para la posicion [" << i << "][" << j << "]: ";
            getline(cin, matriz[i][j]); 
        }
    }
    char letra;
    cout << "Ingrese una letra a buscar: ";
    cin >> letra;
    int contador = 0; 
    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            for (char c : matriz[i][j]) 
            {
                if (c == letra) 
                {
                    contador++;
                }
            }
        }
    }
    cout << "La letra '" << letra << "' aparece " << contador << " veces en la matriz." << endl;
    return 0;
}
