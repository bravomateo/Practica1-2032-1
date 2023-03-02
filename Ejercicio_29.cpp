#include <iostream>

using namespace std;

int main() {
    
    int limInferior = 0;                      // límite inferior del rango de búsqueda
    int limSuperior = 100;                    // límite superior del rango de búsqueda
    int b = (limInferior + limSuperior) / 2;  // buscar en la mitad del rango
    
    char resUsuarios = '*';

    while (true)
    {
        cout << b << " Es el numero?" << endl;
        cout <<  "Ingrese : > Mayor que el numero anterior , < menor que el numero anterior , = igual al numero anterior: ";
        cin >> resUsuarios;

        if (resUsuarios == '=') {
            cout << " Tu numero es " << b << "." << endl;
            break;
        } 

        else if (resUsuarios == '<') {
            limSuperior = b - 1;                    // actualizar límite superior del rango
            b = (limInferior + limSuperior) / 2;    // actualizar número B 
        }
        
        else if (resUsuarios == '>') {
            limInferior = b + 1;                    // actualizar límite inferior del rango
            b = (limInferior + limSuperior) / 2;    // actualizar número B 
        }

    }
    
    return 0;
}

