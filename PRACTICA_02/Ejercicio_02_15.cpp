// Materia: Programación I, Paralelo 1
// Autor: Neider Quispe Paye
// Fecha creación: 04/09/2024
// Número de ejercicio: 15
// Problema planteado: /*Escribir un programa generar un número aleatorio no mayor a dos dígitos y realizar una función para muestre el número en literal.*/

#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;
string numeroEnLiteral(int numero);

int main() 
{
    srand(time(0));
    int numero = rand() % 100;
    cout << "Número generado: " << numero << endl;
    cout << "Número en literal: " << numeroEnLiteral(numero) << endl;
    return 0;
}
string numeroEnLiteral(int numero) 
{
    const string unidades[] = {"cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    const string decenas[] = {"", "diez", "veinti", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    if (numero < 10) 
    {
        return unidades[numero];
    } 
    else 
    if (numero < 20) 
    {
        switch (numero) 
        {
            case 10: return "diez";
            case 11: return "once";
            case 12: return "doce";
            case 13: return "trece";
            case 14: return "catorce";
            case 15: return "quince";
            case 16: return "dieciséis";
            case 17: return "diecisiete";
            case 18: return "dieciocho";
            case 19: return "diecinueve";
            default: return "";
        }
    } 
    else 
    {
        int decena = numero / 10;
        int unidad = numero % 10;
        string resultado = decenas[decena];
        if (unidad > 0) 
        {
            resultado += " y " + unidades[unidad];
        }
        return resultado;
    }
}