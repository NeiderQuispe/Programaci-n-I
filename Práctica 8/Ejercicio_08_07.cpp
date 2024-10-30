// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 29/10/2024
// Número de ejercicio: 7
// Problema planteado: /*Escribe un programa que solicite una matriz cuadrada de dimensión n x n e imprima los elementos de la diagonal principal y de la diagonal secundaria. Los elementos deben ser generados aleatoriamente del 1 al 100.*/
#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime>   
using namespace std;
int main() 
{
    int n;
    cout << "Ingresela matriz cuadrada: ";
    cin >> n;
    vector<vector<int>> matriz(n, vector<int>(n));
    srand(time(NULL));
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            matriz[i][j] = rand() % 100 + 1;
        }
    }
    cout << "Matriz generada:\n";
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            cout << matriz[i][j] << "\t"; 
        }
        cout << endl; 
    }
    cout << "\nElementos de la diagonal principal:\n";
    for (int i = 0; i < n; ++i) 
    {
        cout << matriz[i][i] << " "; 
    }
    cout << endl;
    cout << "Elementos de la diagonal secundaria:\n";
    for (int i = 0; i < n; ++i) 
    {
        cout << matriz[i][n - 1 - i] << " "; 
    }
    cout << endl;
    return 0;
}