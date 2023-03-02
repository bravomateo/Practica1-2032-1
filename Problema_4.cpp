#include <iostream>
using namespace std;

int factorial (int numero);

int main(){

    float euler = 0;
    int limite = 3;
    float auxiliar = 0;
    float unidad = 1;

    for (int contador = 0; contador < limite ; contador++){

        auxiliar = unidad/factorial(contador);
        euler += auxiliar;
    } 
    
    cout << euler << endl;
    return 0;
}

int factorial (int numero) {
    int resultado = 1;
    for (int contador = 1; contador <= numero ; contador++) {
        resultado *= contador;
    }
    return resultado;

}