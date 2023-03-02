#include <iostream>

using namespace std;


int mcm(int A, int B);

int main() {
    int numeroPrueba = 5;

    int mcmAcumulado = 1;
    for (int i = 1; i <= numeroPrueba; i++) mcmAcumulado = mcm(mcmAcumulado, i);

    cout << "El minimo comun multiplo es: " << mcmAcumulado << endl;
    return 0;
}

int mcm(int A, int B) {

    int temporal = 1, copiaA = A, copiaB = B;

    while (temporal != 0) {
        temporal = A%B;
        A = B;
        B = temporal;
    }
    return (copiaA*copiaB)/A;
}