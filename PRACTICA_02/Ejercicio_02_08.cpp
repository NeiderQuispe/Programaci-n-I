// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 03/09/2024
// Número de ejercicio: 8
// Problema planteado: /* Realizar una función para imprimir los primeros N números de la secuencia de Fibonacci.*/

#include <iostream>

using namespace std;
void imprimirFibonacci(int n);

int main() 
{
    int n;
    cout << "Ingresa la cantidad de números de Fibonacci que deseas imprimir: ";
    cin >> n;
    if (n > 0) 
    {
        imprimirFibonacci(n);
    } 
    else 
    {
        cout << "Por favor, ingresa un número positivo." << endl;
    }
    return 0;
}
void imprimirFibonacci(int n) 
{
    int a = 0, b = 1, siguiente;
    for (int i = 1; i <= n; ++i) 
    {
        if (i == 1) 
        {
            cout << a << " "; 
            continue;
        }
        if (i == 2) 
        {
            cout << b << " "; 
            continue;
        }
        siguiente = a + b;
        a = b;
        b = siguiente;
        cout << siguiente << " ";
    }
    cout << endl;
}