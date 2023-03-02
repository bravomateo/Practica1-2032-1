#include <iostream>
using namespace std;

int main(){

    int numeroPrueba = 18;

    cout << numeroPrueba << ", ";

    while (numeroPrueba != 1) {
        if (numeroPrueba % 2 == 0){ // es par 
            numeroPrueba = numeroPrueba/2;

            if (numeroPrueba == 1) {
                cout << numeroPrueba << endl;
            }
            else {
                cout << numeroPrueba << ", ";
            }
  
        } 
        else{ // es impar
            numeroPrueba = numeroPrueba*3 + 1;
            cout << numeroPrueba << ", ";
        }
    }
    return 0;
}
