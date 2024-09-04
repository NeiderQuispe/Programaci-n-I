// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 04/09/2024
// Número de ejercicio: 14
// Problema planteado: /* Realizar una función para generar los cuadrados perfectos en el rango 1 a n. Un número cuadrado, es un número entero que es el cuadrado de algún otro; dicho de otro modo, es un número cuya raíz cuadrada es un número natural.*/

#include <iostream>
#include <cmath> 

using namespace std;
void mostrarCuadradosPerfectos(int n);

int main() 
{
    int n;
    cout << "Ingresa el valor de n: ";
    cin >> n;
    if (n < 1) 
    {
        cout << "El valor de n debe ser mayor o igual a 1." << endl;
        return 1;
    }
    mostrarCuadradosPerfectos(n);
    return 0;
}
void mostrarCuadradosPerfectos(int n) 
{
    cout << "Cuadrados perfectos en el rango de 1 a " << n << ": ";
    for (int i = 1; i <= n; ++i) 
    {
        int raiz = static_cast<int>(sqrt(i));
        if (raiz * raiz == i) 
        {
            cout << i << " ";
        }
    }
    cout << endl;
}