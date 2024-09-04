// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 03/09/2024
// Número de ejercicio: 1
// Problema planteado: /* Leer una cantidad de segundos y realizar una función para convertirla a horas, minutos y segundos.*/

#include <iostream>
using namespace std;

int convertirAHoras(int segundos);
int convertirAMinutos(int segundos);
int convertirASegundos(int segundos);

int main() 
{
    int segundos;
    cout << "Ingresa la cantidad de segundos: ";
    cin >> segundos;

    // Convertir y mostrar el resultado
    int horas = convertirAHoras(segundos);
    int minutos = convertirAMinutos(segundos);
    int segundosRestantes = convertirASegundos(segundos);
    cout << "Horas: " << horas << ", Minutos: " << minutos << ", Segundos: " << segundosRestantes << endl;

    return 0;
}
int convertirAHoras(int segundos) 
{
    return segundos / 3600;
}
int convertirAMinutos(int segundos) 
{
    return (segundos % 3600) / 60;
}
int convertirASegundos(int segundos) 
{
    return segundos % 60;
}