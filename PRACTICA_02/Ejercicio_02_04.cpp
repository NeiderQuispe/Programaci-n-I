// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 03/09/2024
// Número de ejercicio: 4
// Problema planteado: /* Leer tres números enteros y realizar una función para determinar si pueden formar un triángulo rectángulo (aplicar el teorema de Pitágoras).*/

#include <iostream>
#include <algorithm> 

using namespace std;
bool esTrianguloRectangulo(int a, int b, int c); 

int main() 
{
    int a, b, c;
    cout << "Ingresa tres números enteros: ";
    cin >> a >> b >> c;
    if (esTrianguloRectangulo(a, b, c)) {
        cout << "Los números ingresados pueden formar un triángulo rectángulo." << endl;
    } else 
    {
        cout << "Los números ingresados no pueden formar un triángulo rectángulo." << endl;
    }

    return 0;
}
bool esTrianguloRectangulo(int a, int b, int c) 
{
    int lados[] = {a, b, c};
    sort(lados, lados + 3);
    return (lados[2] * lados[2]) == (lados[0] * lados[0] + lados[1] * lados[1]);
}