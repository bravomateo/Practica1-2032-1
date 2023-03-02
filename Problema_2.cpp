#include <iostream>
using namespace std;

#define cincuentaMil 50000;
#define veinteMil    20000;
#define diezMil      10000;
#define cincoMil     5000;
#define dosMil       2000;
#define mil          10000;
#define quinientos   500;
#define doscientos   200;
#define cien         100;
#define cincuenta    50;

int main(){

    int dinero = 87870;

    int cantidad50K = 0, cantidad20K = 0, cantidad10K = 0, cantidad5K = 0, cantidad2K = 0, cantidad1K = 0, cantidad500 = 0, cantidad200 = 0, cantidad100 = 0, cantidad50 = 0;

    // 50000
    cantidad50K = dinero/cincuentaMil;
    dinero = dinero%cincuentaMil;

    // 20000
    cantidad20K = dinero/veinteMil;
    dinero = dinero%veinteMil;

    // 10000
    cantidad10K = dinero/diezMil;
    dinero = dinero%diezMil;

    // 5000
    cantidad5K = dinero/cincoMil;
    dinero = dinero%cincoMil;

    // 2000
    cantidad2K = dinero/dosMil;
    dinero = dinero%dosMil;

    // 1000
    cantidad1K = dinero/mil;
    dinero = dinero%mil;

    // 500
    cantidad500 = dinero/quinientos;
    dinero = dinero%quinientos;

    // 200
    cantidad200 = dinero/doscientos;
    dinero = dinero%doscientos;

    // 100
    cantidad100 = dinero/cien;
    dinero = dinero%cien;

    // 50
    cantidad50 = dinero/cincuenta;
    dinero = dinero%cincuenta;
    
    cout << "50000:   " << cantidad50K << endl;
    cout << "20000:   " << cantidad20K << endl;
    cout << "10000:   " << cantidad10K << endl;
    cout << "5000 :   " << cantidad5K  << endl;
    cout << "2000 :   " << cantidad2K  << endl;
    cout << "1000 :   " << cantidad1K  << endl;
    cout << "500  :   " << cantidad500 << endl;
    cout << "200  :   " << cantidad200 << endl;
    cout << "100  :   " << cantidad100 << endl;
    cout << "50   :   " << cantidad50  << endl;
    cout <<"Faltante: " << dinero      << endl;

    return 0;
}
