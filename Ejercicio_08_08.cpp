// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña 
// Fecha creación: 30/10/2024
// Número de ejercicio: 8
// Problema planteado: la matriz es esparta?
#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

int main() 
{
    int m, n;
    cout << "Ingrese la cantidad de filas (m): ";
    cin >> m;
    cout << "Ingrese la cantidad de columnas (n): ";
    cin >> n;
    int matriz[100][100];
    srand(time(0));
    int contadorCeros = 0;
    for (int i = 0; i < m; ++i)  
    {
        for (int j = 0; j < n; ++j) 
        {
            matriz[i][j] = rand() % 11; 
            if (matriz[i][j] == 0) 
            {
                contadorCeros++;
            }
        }
    }
    cout << "Matriz generada: ";
    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    int totalElementos = m * n;
    if (contadorCeros > totalElementos / 2) 
    {
        cout << "La matriz es esparsa (más del 50% de los elementos son ceros)." << endl;
    } else 
    {
        cout << "La matriz no es esparsa (menos del 50% de los elementos son ceros)." << endl;
    }
    return 0;
}