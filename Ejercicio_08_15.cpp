// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña 
// Fecha creación: 30/10/2024
// Número de ejercicio: 15
// Problema planteado: cuantas veces se repite la letra en la matriz
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int m, n; 
    cout << "Ingrese el número de filas (m): ";
    cin >> m;
    cout << "Ingrese el número de columnas (n): ";
    cin >> n;

    cin.ignore(); 
    string matriz[m][n]; 
    cout << "Ingrese las palabras para la matriz:" << endl;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j) 
        {
            cout << "Palabra en posición (" << i + 1 << ", " << j + 1 << "): ";
            getline(cin, matriz[i][j]); 
        }
    }
    char letra;
    cout << "Ingrese una letra a contar: ";
    cin >> letra;
    int contador = 0;
    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            for (char c : matriz[i][j]) 
            {
                if (c == letra) 
                {
                    contador++;
                }
            }
        }
    }
    cout << "La letra '" << letra << "' aparece " << contador << " veces en la matriz." << endl;
    return 0;
}