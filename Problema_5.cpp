#include <iostream>
using namespace std;


int main(){

    int numeroLimite = 35;
    int anterior = 1;
    int actual = 1;
    int siguiente = anterior + actual;
    int suma = 0;
    while (siguiente < numeroLimite) {


        if (siguiente % 2 == 0) {
            suma += siguiente;
        }

        anterior = actual;
        anterior = actual;
        actual = siguiente;
        siguiente = actual + anterior;
    }

    cout << "La suma es: " << suma << endl;
    return 0;

}

