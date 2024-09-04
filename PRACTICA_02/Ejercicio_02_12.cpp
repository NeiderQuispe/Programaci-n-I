// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 04/09/2024
// Número de ejercicio: 12
// Problema planteado: /* Escriba un programa para leer dos valores enteros distintos entre sí, de tal forma que, si el primer número es mayor al segundo, realizar una función para genere una serie descendente, caso contrario, realizar otra función para muestre una serie ascendente; el factor de incremento o decremento es la unidad.*/

#include <iostream>

using namespace std;
void serieAscendente(int inicio, int fin);
void serieDescendente(int inicio, int fin);

int main() 
{
    int valor1, valor2;
    cout << "Ingresa el primer valor entero: ";
    cin >> valor1;
    cout << "Ingresa el segundo valor entero: ";
    cin >> valor2;
    if (valor1 == valor2) 
    {
        cout << "Los valores ingresados deben ser distintos." << endl;
        return 1;
    }
    if (valor1 > valor2) 
    {
        serieDescendente(valor1, valor2);
    } 
    else 
    {
        serieAscendente(valor1, valor2);
    }
    return 0;
}
void serieDescendente(int inicio, int fin) 
{
    for (int i = inicio; i >= fin; --i) 
    {
        cout << i << " ";
    }
    cout << endl;
}
void serieAscendente(int inicio, int fin) 
{
    for (int i = inicio; i <= fin; ++i) 
    {
        cout << i << " ";
    }
    cout << endl;
}
