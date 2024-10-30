// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña 
// Fecha creación: 30/10/2024
// Número de ejercicio: 12
// Problema planteado: eliminar los digitos
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string entrada;
    cout << "Ingrese una cadena: ";
    getline(cin, entrada); 
    string resultado; 
    for (char c : entrada) 
    {
        if (!isdigit(c)) 
        {
            resultado += c; 
        }
    }
    cout << "Cadena sin dígitos: " << resultado << endl;
    return 0;
}