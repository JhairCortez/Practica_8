// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña 
// Fecha creación: 30/10/2024
// Número de ejercicio: 2
// Problema planteado: nombre y apellido
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    vector<string> nombres = {"Juan", "Ana", "Luis", "Carlos", "María", "Pedro", "Laura", "Sofia", "Jorge", "Lucía"};
    vector<string> apellidos = {"Pérez", "García", "López", "Martínez", "Rodríguez", "Gómez", "Fernández", "Díaz", "Romero", "Torres"};
    vector<int> edades = {20, 25, 30, 35, 40, 45, 50, 55, 60, 65};
    int N;
    cout << "Ingrese el número de veces que desea realizar la selección: ";
    cin >> N;
    srand(time(0));
    for (int i = 0; i < N; ++i) 
    {
        int indiceAleatorio = rand() % 10;
        cout << "Selección #" << (i + 1) << ": ";
        cout << nombres[indiceAleatorio] << " " << apellidos[indiceAleatorio] << ", " << edades[indiceAleatorio] << " años" << endl;
    }
    return 0;
}