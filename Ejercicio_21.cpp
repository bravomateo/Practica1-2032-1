#include <iostream>
using namespace std;

int main(){

    char letra;

    cout << "Ingrese un caracter: ";
    cin >> letra;

    if( (letra>= 65 && letra <= 90) || (letra>= 97 && letra <= 122) ) {
    
        if ( letra>= 65 && letra <= 90 )  { // condicion de mayuscula
            cout << "La letra es mayuscula" << endl;
            letra += 32; 
        }

        else {
            cout << "La letra es minuscula" << endl;
            letra -= 32;
        }
        
    }

    else {
        cout << letra << " no es una letra" << endl;
    }

    cout << "La letra es: " << letra << endl;

    return 0;
}
