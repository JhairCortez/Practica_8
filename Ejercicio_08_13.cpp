// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña 
// Fecha creación: 30/10/2024
// Número de ejercicio: 13
// Problema planteado: eliminar las comas
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() 
{
    string entrada;
    char delimitador = ',';
    cout << "Ingrese una cadena (usa comas como delimitador): ";
    getline(cin, entrada);
    stringstream ss(entrada); 
    string token;
    cout << "Salida: ";
    while (getline(ss, token, delimitador)) 
    {
        cout << token << endl;
    }
    return 0;
}