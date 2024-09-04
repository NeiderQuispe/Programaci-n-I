// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 04/09/2024
// Número de ejercicio: 11
// Problema planteado: /* Realizar una función para generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49... para n términos.*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> generarSecuencia(int n);
int main() 
{
    int n;
    cout << "Ingresa el número de términos de la secuencia que deseas generar: ";
    cin >> n;
    vector<int> secuencia = generarSecuencia(n);
    cout << "La secuencia generada es: ";
    for (int num : secuencia) 
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
vector<int> generarSecuencia(int n) 
{
    vector<int> secuencia;
    if (n <= 0) return secuencia; 
    secuencia.push_back(1);
    if (n == 1) return secuencia;
    secuencia.push_back(1);
    for (int i = 2; i < n; ++i) 
    {
        int siguiente;
        if (i < 5) 
        {
            siguiente = 2 * secuencia[i - 1];
        } 
        else 
        {
            siguiente = secuencia[i - 1] + secuencia[i - 2] + 1;
        }
        secuencia.push_back(siguiente);
    }
    return secuencia;
}