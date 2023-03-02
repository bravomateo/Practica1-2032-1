#include <iostream>
using namespace std;


bool esPalindromo (int numeroPrueba);

int main(){
 
    int numeroPrueba = 939;
    cout << esPalindromo(numeroPrueba) << endl;

    return 0;
}

bool esPalindromo (int numeroPrueba) {

    int copiaNumero = numeroPrueba, residuo = 0, cociente = 0, numeroNuevo = 0;

    while (numeroPrueba > 0) {
        residuo = numeroPrueba%10;
        cociente = numeroPrueba/10;
        numeroPrueba = cociente;
        numeroNuevo = residuo + numeroNuevo*10;
    }

    if (copiaNumero == numeroNuevo) return true;
    else return false;
}


