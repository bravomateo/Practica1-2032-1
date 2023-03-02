#include <iostream>
using namespace std;

int main(){

    int numeroIngresado = 1;
    int acumulado = 0;

    while (numeroIngresado != 0)
    {
        cout << "Ingrese un numero: ";
        cin >> numeroIngresado;

        acumulado += numeroIngresado;
    }
    
    cout << "La suma de los numero es: " << acumulado;
    return 0;
}