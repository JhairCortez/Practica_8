// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña 
// Fecha creación: 30/10/2024
// Número de ejercicio: 14
// Problema planteado: completa palabras en la matriz
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int n; 
    const int MAX_LONGITUD = 20;
    char matriz[100][MAX_LONGITUD + 1];
    cout << "Ingrese el número de palabras: ";
    cin >> n;
    cin.ignore(); 
    for (int i = 0; i < n; ++i) 
    {
        cout << "Ingrese la palabra " << (i + 1) << ": ";
        cin.getline(matriz[i], MAX_LONGITUD + 1); 
        for (int j = strlen(matriz[i]); j < MAX_LONGITUD; ++j) 
        {
            matriz[i][j] = ' '; 
        }
        matriz[i][MAX_LONGITUD] = '\0'; 
    }
    cout << "\nMatriz resultante: ";
    for (int i = 0; i < n; ++i) 
    {
        cout << matriz[i] << endl; 
    }
    return 0;
}