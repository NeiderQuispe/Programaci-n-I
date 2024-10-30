// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 30/10/2024
// Número de ejercicio: 14
// Problema planteado: 
/*Escribe un programa que divida una cadena en tokens (subcadenas) separadas por un delimitador. Por ejemplo, dividir una oración en palabras.
// Entrada: "Esto,es,una,cadena,separada,por,comas", delimitador: ','
// Salida:
// Esto
// es
// una
// cadena
// separada
// por
// comas*/
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main()
{
    string cadena;
    char delimitador;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena); 
    cout << "Ingrese un delimitador: ";
    cin >> delimitador;
    stringstream ss(cadena); 
    string token;
    while (getline(ss, token, delimitador))
    {
        cout << token << endl; 
    }
    return 0;
}
