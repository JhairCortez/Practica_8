// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña 
// Fecha creación: 30/10/2024
// Número de ejercicio: 6
// Problema planteado: diagonal principal y secundaria
#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

int main() 
{
    int n;
    cout << "Ingrese la dimensión de la matriz (n x n): ";
    cin >> n;
    int matriz[100][100];
    srand(time(0));
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            matriz[i][j] = 1 + rand() % 100;
        }
    }
    cout << "Matriz generada: ";
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j)  
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nDiagonal principal: ";
    for (int i = 0; i < n; ++i) 
    {
        cout << matriz[i][i] << " ";
    }
    cout << endl;
    cout << "Diagonal secundaria: ";
    for (int i = 0; i < n; ++i) 
    {
        cout << matriz[i][n - 1 - i] << " ";
    }
    cout << endl;
    return 0;
}