#include <iostream>
using namespace std;

int main()
{
    int numeroPrueba = 173668;
    int numeroDigitos = 0;

    while (numeroPrueba != 0)
    {
        numeroPrueba = numeroPrueba/10;
        numeroDigitos += 1;
    }
    cout << "El numero de digitos es: " << numeroDigitos << endl;
    
    return 0;
}