// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña 
// Fecha creación: 30/10/2024
// Número de ejercicio: 9
// Problema planteado: muestre los elementos del borde de la matriz
#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

int main() {
    int m, n;
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
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Elementos en el borde de la matriz: ";
    for (int j = 0; j < n; ++j) 
    {
        cout << matriz[0][j] << " ";
    }
    cout << endl;
    if (m > 1) 
    {
        for (int j = 0; j < n; ++j) 
        {
            cout << matriz[m - 1][j] << " ";
        }
        cout << endl;
    }
    for (int i = 1; i < m - 1; ++i) 
    {
        cout << matriz[i][0] << " ";
    }
    cout << endl;
    if (n > 1) 
    {
        for (int i = 1; i < m - 1; ++i) 
        {
            cout << matriz[i][n - 1] << " ";
        }
        cout << endl;
    }
    return 0;
}