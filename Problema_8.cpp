#include <iostream>
using namespace std;

bool esNumeroPrimo (int numero); // funcion que retorna 1 si es primo o 0 si no lo es

int enesimoPrimo (int numero) ;

int main(){

    int numeroPrueba = 10;
    cout << enesimoPrimo (numeroPrueba) << endl;
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

int enesimoPrimo (int numero) {
    int numerosPrimos = 0;
    int posiblePrimo = 2;

    while (numerosPrimos < numero)
    {
        if (esNumeroPrimo(posiblePrimo) == true){
            numerosPrimos += 1;
        }
        posiblePrimo += 1;
    }
    return posiblePrimo-1;
}
