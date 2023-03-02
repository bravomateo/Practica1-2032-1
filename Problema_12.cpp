#include <iostream>
using namespace std;


bool esPalindromo (int numeroPrueba);

int main(){
 
    int maximoResultado = 0, maximoPrimero = 0, MaximoSegundo = 0, resultado = 0;

    for(int i = 100 ; i < 1000 ; i++){
        for(int j = 100 ; j < 1000 ; j++){
            resultado = i*j;
            if (esPalindromo(resultado) == true){

                if (resultado > maximoResultado){
                    maximoResultado = resultado;
                    maximoPrimero  = i;
                    MaximoSegundo = j;
                }
            }
        }
    }
    cout<<maximoPrimero<<"*"<<MaximoSegundo<<"="<<maximoResultado<<endl;

    return 0;
}

bool esPalindromo (int numeroPrueba) {

    int copiaNumero = numeroPrueba, residuo = 0, cociente = 0, numeroNuevo = 0;

    while (numeroPrueba > 0) {
        residuo = numeroPrueba%10;
        cociente = numeroPrueba/10;
        numeroPrueba = cociente;
        numeroNuevo = residuo + numeroNuevo*10;
    }

    if (copiaNumero == numeroNuevo) return true;
    else return false;
}


