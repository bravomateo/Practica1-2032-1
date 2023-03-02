#include <iostream>
using namespace std;

int main(){

    char letra;

    cout << "Ingrese un caracter: ";
    cin >> letra;

    if( (letra>= 65 && letra <= 95) || (letra>= 97 && letra <= 122) ) {
        cout << letra << " es una consonante" << endl;}

    else if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' ||
            letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
            cout << letra << " es una vocal" << endl;
        }
    else {
        cout << letra << " no es una letra" << endl;
    }

    return 0;
}
