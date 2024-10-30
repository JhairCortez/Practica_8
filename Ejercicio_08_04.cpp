// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña 
// Fecha creación: 30/10/2024
// Número de ejercicio: 4
// Problema planteado: rotacion del vector
#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int N, k;
    cout << "Ingrese la cantidad de números: ";
    cin >> N;
    vector<int> numeros(N);
    cout << "Ingrese los números:\n";
    for (int i = 0; i < N; ++i) 
    {
        cin >> numeros[i];
    }
    cout << "Ingrese el número de posiciones para rotar a la derecha: ";
    cin >> k;
    k = k % N;
    vector<int> resultado(N);
    for (int i = 0; i < N; ++i) 
    {
        resultado[(i + k) % N] = numeros[i];
    }
    cout << "Vector después de la rotación: ";
    for (int i = 0; i < N; ++i) 
    {
        cout << resultado[i] << " ";
    }
    cout << endl;
    return 0;
}