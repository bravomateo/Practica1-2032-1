#include <iostream>
using namespace std;


float seriePi(float aproximacion);
int potencia (int numero, int exponente);


int main()
{   
    int aproximacion = 3;
    cout << "pi es aproximadamente: " << seriePi(aproximacion) << endl;

    return 0;
}


float seriePi(float aproximacion) {

    float pi = 0, denominador = 0;
    int signo = 0;
    
    for (int n = 0 ; n < aproximacion ; n++) {
        signo = potencia(-1,n);
        denominador = 2*n + 1;
        pi += signo*(4/denominador);
    }
    return pi;
}

int potencia (int numero, int exponente){
    int resulado = 1;
    for (int iterador = 0 ; iterador < exponente ; iterador++) resulado = numero*resulado;
    return resulado;
}
