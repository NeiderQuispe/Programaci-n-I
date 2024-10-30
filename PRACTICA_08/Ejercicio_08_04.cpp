// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 29/10/2024
// Número de ejercicio: 4
// Problema planteado: /*Escribe un programa que permita al usuario ingresar N números en un vector. El programa debe eliminar los elementos duplicados en el vector y mostrar el vector resultante sin duplicados.*/
#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    int N;
    cout << "Ingrese la cantidad : ";
    cin >> N;
    vector<int> numeros; 
    cout << "Ingrese " << N << " numero:" << endl;
    for (int i = 0; i < N; ++i) 
    {
        int num;
        cin >> num;
        numeros.push_back(num); 
    }
    vector<int> sinDuplicados;
    for (int i = 0; i < numeros.size(); ++i) 
    {
        bool esDuplicado = false;
        for (int j = 0; j < sinDuplicados.size(); ++j) 
        {
            if (numeros[i] == sinDuplicados[j]) 
            {
                esDuplicado = true; 
            }
        }
        if (!esDuplicado) 
        {
            sinDuplicados.push_back(numeros[i]);
        }
    }
    cout << "Vector sin duplicados: ";
    for (int num : sinDuplicados) 
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
