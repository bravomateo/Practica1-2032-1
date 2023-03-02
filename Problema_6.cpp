#include <iostream>
using namespace std;


int main(){

    int numeroA = 5, numeroB = 7, numeroC = 36; // numero ingresado por consola

    int acumulado = 0, banderaImpresion = 0;

    for (int posibleMultiplos = 2;  posibleMultiplos < numeroC ; posibleMultiplos++) {
        if (posibleMultiplos % numeroA == 0) {
            if (banderaImpresion == 0) {
                cout << posibleMultiplos;
                banderaImpresion = 1;
            }
            else {
                cout << "+" << posibleMultiplos;
            }
            acumulado += posibleMultiplos;
        }
    }

    for (int posibleMultiplos = 2;  posibleMultiplos < numeroC ; posibleMultiplos++) {
        if (posibleMultiplos % numeroB == 0 && posibleMultiplos % numeroA != 0) {
            acumulado += posibleMultiplos;
            cout << "+" <<posibleMultiplos;
        }  
    }
    cout << "=" << acumulado << endl;

    return 0;

}