// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña 
// Fecha creación: 30/10/2024
// Número de ejercicio: 5
// Problema planteado: matriz orden n x n
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Ingrese el valor de n para la matriz nxn: ";
    cin >> n;
    int matriz[100][100];
    for (int i = 0; i < n; ++i) 
    {
        int valor = 1 + 2 * i; 
        for (int j = 0; j < n; ++j) {
            matriz[i][j] = valor;
            valor += 1; 
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
    return 0;
}