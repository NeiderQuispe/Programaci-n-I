// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 04/09/2024
// Número de ejercicio: 10
// Problema planteado: /* Leer un número de cuatro dígitos y realizar una función para determinar si al menos dos de los dígitos son iguales.*/

#include <iostream>

using namespace std;
bool tieneDígitosIguales(int numero);
int main() 
{
    int numero;
    cout << "Ingresa un número de cuatro dígitos: ";
    cin >> numero;
    if (numero >= 1000 && numero <= 9999) 
    {
        if (tieneDígitosIguales(numero)) 
        {
            cout << "El número " << numero << " tiene al menos dos dígitos iguales." << endl;
        } 
        else 
        {
            cout << "El número " << numero << " no tiene dígitos iguales." << endl;
        }
    } 
    else 
    {
        cout << "El número ingresado no es de cuatro dígitos." << endl;
    }
    return 0;
}
bool tieneDígitosIguales(int numero) 
{
    int d1 = numero / 1000;       
    int d2 = (numero / 100) % 10;  
    int d3 = (numero / 10) % 10;  
    int d4 = numero % 10;          
    return (d1 == d2 || d1 == d3 || d1 == d4 ||
            d2 == d3 || d2 == d4 ||
            d3 == d4);
}