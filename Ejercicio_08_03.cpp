// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña 
// Fecha creación: 30/10/2024
// Número de ejercicio: 3
// Problema planteado: eliminar elementos duplicados
#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int N;
    cout << "Ingrese la cantidad de números: ";
    cin >> N;
    vector<int> numeros;
    cout << "Ingrese los números: ";
    for (int i = 0; i < N; ++i) 
    {
        int num;
        cin >> num;
        numeros.push_back(num);
    }
    vector<int> resultado;
    for (int i = 0; i < numeros.size(); ++i) 
    {
        bool esDuplicado = false;
        for (int j = 0; j < resultado.size(); ++j) 
        {
            if (numeros[i] == resultado[j]) 
            {
                esDuplicado = true;
                break;
            }
        }
        if (!esDuplicado) 
        {
            resultado.push_back(numeros[i]);
        }
    }
    cout << "Vector sin duplicados: ";
    for (int i = 0; i < resultado.size(); ++i) 
    {
        cout << resultado[i] << " ";
    }
    cout << endl;
    return 0;
}