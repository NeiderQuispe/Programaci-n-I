// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 03/09/2024
// Número de ejercicio: 3
// Problema planteado: /* Cálculo de la distancia entre dos puntos: Leer las coordenadas de dos puntos en el plano cartesiano y realizar una función para calcular la distancia entre ellos usando la fórmula.*/

#include <iostream>
#include <cmath> 

using namespace std;
double calcularDistancia(double x1, double y1, double x2, double y2);

int main() 
{
    double x1, y1, x2, y2;
    cout << "Ingresa las coordenadas del primer punto (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Ingresa las coordenadas del segundo punto (x2, y2): ";
    cin >> x2 >> y2;
    double distancia = calcularDistancia(x1, y1, x2, y2);
    cout << "La distancia entre los dos puntos es: " << distancia << endl;

    return 0;
}
double calcularDistancia(double x1, double y1, double x2, double y2) 
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}