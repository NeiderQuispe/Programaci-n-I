// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 03/09/2024
// Número de ejercicio: 7
// Problema planteado: /* Realizar una función para imprimir la tabla de multiplicar de un número dado.*/

#include <iostream>

using namespace std;
void imprimirTablaMultiplicar(int numero);

int main() 
{
    int numero;
    cout << "Ingresa un número para imprimir su tabla de multiplicar: ";
    cin >> numero;
    imprimirTablaMultiplicar(numero);

    return 0;
}
void imprimirTablaMultiplicar(int numero) 
{
    for (int i = 1; i <= 10; ++i) 
    {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
}