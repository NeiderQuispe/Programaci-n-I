// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 03/09/2024
// Número de ejercicio: 2
// Problema planteado: /* Cálculo de la hipotenusa: Leer las longitudes de los dos catetos de un triángulo rectángulo y realizar una función para calcular la hipotenusa usando el teorema de Pitágoras.*/ 

#include <iostream>
#include <cmath> // Para utilizar la función sqrt

using namespace std;
double calcularHipotenusa(double cateto1, double cateto2);

int main() 
{
    double cateto1, cateto2;

    // Leer las longitudes de los dos catetos
    cout << "Ingresa la longitud del primer cateto: ";
    cin >> cateto1;
    cout << "Ingresa la longitud del segundo cateto: ";
    cin >> cateto2;

    double hipotenusa = calcularHipotenusa(cateto1, cateto2);

    cout << "La hipotenusa es: " << hipotenusa << endl;
    return 0;
}
double calcularHipotenusa(double cateto1, double cateto2) 
{
    return sqrt(pow(cateto1, 2) + pow(cateto2, 2));
}