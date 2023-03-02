#include <iostream>
using namespace std;

bool esNumeroPrimo (int numero); // funcion que retorna 1 si es primo o 0 si no lo es


int main(){

    int numeroPrueba = 23;
    int acumulador = 0;
    for (int i = 0 ; i < numeroPrueba ; i++) {
        if (esNumeroPrimo(i) == true){
            acumulador = acumulador + i;
        } 
    }

    cout << acumulador << endl;
    return 0;

}

bool esNumeroPrimo (int numero){
    
    int banderaDivisor = 0;

    for (int contador = 1; contador <= numero/2 ; contador ++ ) {        
        if (numero % contador  == 0) {
            banderaDivisor += 1;
        }
    }
    if (banderaDivisor == 1) {
        return true;
    }
    else {
        return false;
    }
}

