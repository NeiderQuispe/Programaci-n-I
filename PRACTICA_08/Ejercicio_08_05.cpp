// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 29/10/2024
// Número de ejercicio: 5
// Problema planteado: /*Crea un programa que permita al usuario ingresar N números en un vector y luego rota el vector k posiciones a la derecha. Muestra el vector después de la rotación.*/
#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    int N, k;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> N;
    vector<int> numeros(N);
    cout << "Ingrese " << N << " numeros:" << endl;
    for (int i = 0; i < N; ++i) 
    {
        cin >> numeros[i];
    }
    cout << "Ingrese numero para rotar a la derecha: ";
    cin >> k;
    k = k % N;
    vector<int> rotado(N);
    for (int i = 0; i < N; ++i) 
    {
        rotado[(i + k) % N] = numeros[i];
    }
    cout << "Vector de rotar " << k << " posiciones a la derecha: ";
    for (int num : rotado) 
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}