#include <iostream>
using namespace std;

int main(){

    int numeroIngresado = 33;

    for (int multiplos = numeroIngresado; multiplos <= 100 ; multiplos++){
        if (multiplos%numeroIngresado == 0){
                cout << multiplos << endl;
        }
    }


    return 0;
}