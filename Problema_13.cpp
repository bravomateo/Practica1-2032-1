#include <iostream>
using namespace std;

int main(){

    int dimension, cntExterno = 0, cambio = 2, numEsquina = 1, acumulado = 1, cntInterno = 0;

    cout << "Ingrese un numero impar: ";
    cin >> dimension;
 
    while(cntExterno < (dimension/2) ){ // Existen n/2 espirales para una espiral de dimension n
        cntInterno = 0;
        
        while (cntInterno < 4){
            numEsquina +=  cambio;
            acumulado += numEsquina;
            cntInterno++;
        }
        cambio += 2;
        cntExterno++;
    }
    cout<<"En una espiral de " << dimension <<"x"<< dimension <<", la suma es: "<< acumulado <<endl;

    return 0;
}