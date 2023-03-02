#include <iostream>
using namespace std;

int main(){

    int mes = 4;
    int dia = 31;

    if (mes <= 12 ) {

        if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && dia <= 31) {
            cout << dia << "/" << mes << " es un fecha valida" << endl;
        }

        else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11 ) && dia <= 30)
        {
            cout << dia << "/" << mes << " es un fecha valida" << endl;
        }
        
        else if (mes == 2) {
            if (dia <= 28) {
                cout << dia << "/" << mes << " es un fecha valida" << endl;
            }
            else if (dia == 29){
                cout << dia << "/" << mes << " es valida en biciesto" << endl;
            } 
        }
        else {
            cout << dia << "/" << mes << " es un fecha invalida" << endl;
        }

    }
    else {
        cout << mes << " es un mes invalido." << endl;
    }

    return 0;
}
