// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 04/09/2024
// Número de ejercicio: 13
// Problema planteado: /*Realizar una función para generar una secuencia de números aleatorios entre 1 y 100, desplegar en pantalla todos los números generados y si el número es divisible entre 5, al lado del número debe imprimir un asterisco (*).*/

#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;
void generarYMostrarSecuencia(int cantidad);

int main() 
{
    int cantidad;
    cout << "Ingresa la cantidad de números aleatorios a generar: ";
    cin >> cantidad;
    generarYMostrarSecuencia(cantidad);

    return 0;
}
void generarYMostrarSecuencia(int cantidad) 
{
    srand(time(0));
    for (int i = 0; i < cantidad; ++i) 
    {
        int numero = rand() % 100 + 1; 
        cout << numero;
        if (numero % 5 == 0) 
        {
            cout << "*";
        }
        cout << " ";
    }
    cout << endl;
}