// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 03/09/2024
// Número de ejercicio: 6
// Problema planteado: /* Leer una hora (en formato de 24 horas) y realizar una función para determinar si corresponde a la mañana, tarde, noche o madrugada.*/

#include <iostream>
#include <string>

using namespace std;
string determinarParteDelDia(int hora);

int main() 
{
    int hora;
    cout << "Ingresa la hora (en formato de 24 horas): ";
    cin >> hora;
    string parteDelDia = determinarParteDelDia(hora);
    cout << "La hora corresponde a: " << parteDelDia << endl;
    return 0;
}
string determinarParteDelDia(int hora) 
{
    if (hora >= 6 && hora < 12) 
    {
        return "Mañana";
    } 
    else 
    if (hora >= 12 && hora < 18) 
    {
        return "Tarde";
    } 
    else 
    if (hora >= 18 && hora < 24) 
    {
        return "Noche";
    } 
    else 
    if ((hora >= 0 && hora < 6) || hora == 24) 
    {
        return "Madrugada";
    } 
    else 
    {
        return "Hora no válida";
    }
}