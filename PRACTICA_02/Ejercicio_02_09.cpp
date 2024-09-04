// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 03/09/2024
// Número de ejercicio: 9
// Problema planteado: /* Leer un número entero y realizar una función para determinar si el número ingresado pertenece a la secuencia de Fibonacci.*/

#include <iostream>
#include <cmath> 

using namespace std;
bool esCuadradoPerfecto(int x);
bool esFibonacci(int numero);

int main() 
{
    int numero;
    cout << "Ingresa un número entero: ";
    cin >> numero;
    if (esFibonacci(numero)) 
    {
        cout << "El número " << numero << " pertenece a la secuencia de Fibonacci." << endl;
    } 
    else 
    {
        cout << "El número " << numero << " no pertenece a la secuencia de Fibonacci." << endl;
    }
    return 0;
}
bool esCuadradoPerfecto(int x) 
{
    int s = sqrt(x);
    return (s * s == x);
}
bool esFibonacci(int numero) 
{
    return esCuadradoPerfecto(5 * numero * numero + 4) || esCuadradoPerfecto(5 * numero * numero - 4);
}