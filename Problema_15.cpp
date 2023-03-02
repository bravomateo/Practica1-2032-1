#include <iostream>
using namespace std;

int numeroDivisores (int numero);

int main(){

    int numeroK = 25;
    int divisores = 0;
    int cnt = 1;

    while (true) {

        if (numeroDivisores((cnt*(cnt+1))/2) > numeroK) {
            divisores = (cnt*(cnt+1))/2;
            break;
        }
        cnt += 1;
    }
    
    cout << "El numero es: " << divisores << " que tiene " << numeroDivisores(divisores) << " divisores" << endl;
    
    return 0;
}

int numeroDivisores (int numero) {

    int cantidadDivisores = 0;
    for (int i = 1 ; i <= numero ; i++) {
        if (numero % i == 0) {
            cantidadDivisores += 1;
        }
    }
    return cantidadDivisores;
}