#include <iostream>
using namespace std;


int main(){

    int numeroPrueba = 34; // ingresado por el usuario 

    int numeroDivisor = 2, factorMayor = 0;

    while (numeroPrueba != 1) {

        if (numeroPrueba % numeroDivisor == 0){
            factorMayor = numeroDivisor;
            numeroPrueba = numeroPrueba/numeroDivisor;
        }
        else {
            numeroDivisor += 1;
        }  
    }
    cout << factorMayor << endl;
    return 0;
}
