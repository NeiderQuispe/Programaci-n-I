// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 29/10/2024
// Número de ejercicio: 6
// Problema planteado: 
/*Generar la matriz para un orden nxn
Sea n=5
1 2 3 4 5
3 4 5 6 7
5 6 7 8 9
7 8 9 10 11
9 10 11 12 13*/
#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    int n;
    cout << "Ingrese el orden: ";
    cin >> n;
    vector<vector<int>> matriz(n, vector<int>(n));
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            matriz[i][j] = (i + j + 1); 
        }
    }
    cout << "Matriz de orden " << n << ":\n";
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
