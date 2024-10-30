// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 30/10/2024
// Número de ejercicio: 15
// Problema planteado: /*Crea un programa que solicite al usuario ingresar una lista de n palabras. Almacena cada palabra en una fila de una matriz de caracteres, de manera que cada columna represente un carácter de la palabra. Si una palabra es más corta que otras, completa la fila con espacios en blanco. Muestra la matriz resultante.*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() 
{
    int n;
    cout << "Ingrese el numero de palabras: ";
    cin >> n;
    cin.ignore(); 
    vector<string> palabras(n); 
    int maxLength = 0; 
    for (int i = 0; i < n; ++i)
    {
        cout << "Ingrese la palabra " << (i + 1) << ": ";
        getline(cin, palabras[i]); 
        if (palabras[i].length() > maxLength) 
        {
            maxLength = palabras[i].length(); 
        }
    }
    char matriz[n][maxLength + 1]; 
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < maxLength; ++j) 
        {
            if (j < palabras[i].length()) 
            {
                matriz[i][j] = palabras[i][j]; 
            } else {
                matriz[i][j] = ' '; 
            }
        }
        matriz[i][maxLength] = '\0'; 
    }
    cout << "\nMatriz resultante:" << endl;
    for (int i = 0; i < n; ++i) 
    {
        cout << matriz[i] << endl; 
    }
    return 0;
}
