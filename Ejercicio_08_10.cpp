// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña 
// Fecha creación: 30/10/2024
// Número de ejercicio: 10
// Problema planteado: correo electronico
#include <iostream>
#include <string>
using namespace std;

bool esCorreoValido(const string& correo) 
{
    int contadorArroba = 0;
    int posicionPunto = -1; 
    for (size_t i = 0; i < correo.length(); ++i) 
    {
        if (correo[i] == '@') 
        {
            contadorArroba++;
            if (contadorArroba > 1) 
            {
                return false; 
            }
        }
        if (contadorArroba == 1 && correo[i] == '.') 
        {
            posicionPunto = i;
        }
    }
    return (contadorArroba == 1 && posicionPunto > 0);
}
int main() 
{
    string correo;
    cout << "Ingrese una dirección de correo electrónico: ";
    cin >> correo;
    if (esCorreoValido(correo)) 
    {
        cout << "Correo electrónico válido" << endl;
    } else {
        cout << "Correo electrónico inválido" << endl;
    }
    return 0;
}