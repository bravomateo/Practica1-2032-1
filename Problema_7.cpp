#include <iostream>
using namespace std;

int potencia (int numero);

int main(){
    int numeroEntrada = 0;
    cout << "Ingrese un numero: "; 
    cin >> numeroEntrada;
    int auxiliar = 0;
    int sumatoria = 0;

    while (numeroEntrada != 0)
    {
        auxiliar = numeroEntrada%10;
        numeroEntrada = numeroEntrada/10;
        sumatoria += potencia(auxiliar);
        
    }
    cout << sumatoria << endl;
    
    return 0;

}

int potencia (int numero){

    int multiplicacion = 1;
    for (int iterador = 0 ; iterador < numero ; iterador++) {
        multiplicacion = multiplicacion*numero;
    }
    return multiplicacion;
}