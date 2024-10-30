// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 29/10/2024
// Número de ejercicio: 3
// Problema planteado: 
/*Se tiene 3 vectores de 10 elementos cada uno:
•Vector de nombres.
•Vector Apellidos
•Vector de Edad
Seleccione 1 nombre, 1 apellido y una edad al azar y despliegue en pantalla.
Esto debe realizar N veces.*/
#include <iostream>
#include <vector>
#include <ctime>   
#include <cstdlib> 
using namespace std;
int main() 
{
    srand(time(0));
    vector<string> nombres = {"Juan", "Ana", "Luis", "Carmen", "Pedro", "Laura", "Carlos", "Sofia", "Miguel", "Lucia"};
    vector<string> apellidos = {"Perez", "Garcia", "Lopez", "Martinez", "Rodriguez", "Hernandez", "Gomez", "Diaz", "Fernandez", "Ruiz"};
    vector<int> edades = {21, 34, 18, 45, 29, 31, 24, 27, 40, 36};
    int N;
    cout << "Ingrese el numero al azar: ";
    cin >> N;
    for (int i = 0; i < N; ++i) 
    {
        int indiceNombre = rand() % nombres.size();
        int indiceApellido = rand() % apellidos.size();
        int indiceEdad = rand() % edades.size();
        cout << "Seleccion aleatoria " << i + 1 << ": ";
        cout << nombres[indiceNombre] << " " << apellidos[indiceApellido] << ", Edad: " << edades[indiceEdad] << endl;
    }
    return 0;
}
