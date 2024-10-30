// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña 
// Fecha creación: 30/10/2024
// Número de ejercicio: 1
// Problema planteado: determine la desviacion tipica
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() 
{
    vector<int> edades; 
    int edad;
    cout << "Ingresa las edades (ingresa -1 para terminar): ";
    while (true) 
    {
        cin >> edad;
        if (edad == -1) break;
        edades.push_back(edad);
    }
    if (edades.empty()) 
    { 
        cout << "No se ingresaron edades." << endl;
        return 0;
    }
    double suma = 0;
    for (int e : edades) 
    {
        suma += e; 
    }
    double media = suma / edades.size(); 
    double varianza = 0; 
    for (int e : edades) 
    {
        varianza += pow(e - media, 2);
    }
    varianza /= edades.size();
    double desviacion_tipica = sqrt(varianza); 
    cout << "La desviación típica de las edades ingresadas es: " << desviacion_tipica << endl;
    return 0;
}