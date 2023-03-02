#include <iostream>
using namespace std;

int mcm(int A, int B);

int main() {

    int numeroA = 4;
    int numeroB = 6;

    cout << "El minimo comun multiplo es: " << mcm(numeroA, numeroB) << endl;
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