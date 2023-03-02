#include <iostream>
using namespace std;

int main(){

    int numeroIngresado = 1;

    int numeroMayor = 0;

    while (numeroIngresado!=0)
    {
        cout << "Ingrese un numero: ";
        cin >> numeroIngresado;
        
        if (numeroIngresado >= numeroMayor){
            numeroMayor = numeroIngresado;
        }
    }
    
    cout << "El numero mayor es: " << numeroMayor << endl;

    return 0;
}