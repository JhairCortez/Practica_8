// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña 
// Fecha creación: 30/10/2024
// Número de ejercicio: 11
// Problema planteado: invertir las palabras
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() 
{
    string oracion;
    cout << "Ingrese una oración: ";
    getline(cin, oracion); 
    vector<string> palabras;
    stringstream ss(oracion); 
    string palabra;
    while (ss >> palabra) 
    {
        palabras.push_back(palabra);
    }
    cout << "Oración invertida: ";
    for (int i = palabras.size() - 1; i >= 0; --i) 
    {
        cout << palabras[i];
        if (i != 0) 
        {
            cout << " "; 
        }
    }
    cout << endl;
    return 0;
}