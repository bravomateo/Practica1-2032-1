#include <iostream>
using namespace std;

int main(){

    int numeroLimite = 9;
    bool banderaNumero = false;

    for(int i = 1 ; i*i <= numeroLimite+1 ; i++) {
        if (i*i == numeroLimite) {
            banderaNumero = true;
        }
    }

    cout << "El valor es: " << banderaNumero; 

    return 0;
}