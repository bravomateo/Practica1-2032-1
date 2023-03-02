#include <iostream>
using namespace std;

int main(){

    int numeroIngresado = 4;

    for (int divisores = 1; divisores <= numeroIngresado ; divisores++){
        if (numeroIngresado % divisores == 0){
                cout << divisores << endl;
        }
    }


    return 0;
}