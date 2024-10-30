// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña 
// Fecha creación: 30/10/2024
// Número de ejercicio: 7
// Problema planteado: buscar un numero dentro de la matriz
#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

int main() 
{
    int m, n, buscar;
    cout << "Ingrese la cantidad de filas (m): ";
    cin >> m;
    cout << "Ingrese la cantidad de columnas (n): ";
    cin >> n;
    int matriz[100][100];
    srand(time(0));
    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            matriz[i][j] = 1 + rand() % 100;
        }
    }
    cout << "Matriz generada: ";
    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Ingrese el número a buscar: ";
    cin >> buscar;
    bool encontrado = false;
    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        }
            if (matriz[i][j] == buscar) 
            {
                cout << "Número encontrado en la posición: Fila " << i << ", Columna " << j << endl;
                encontrado = true;
                break; 
            }
        }
        if (encontrado) break; 
    }
    if (!encontrado) 
    {
        cout << "El número no se encuentra en la matriz." << endl;
    }
    return 0;
}