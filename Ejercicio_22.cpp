#include <iostream>
using namespace std;

int main() {
    int segundos = 0, horas = 0, minutos = 0, sobranteTiempo = 0;

    cout << "Ingrese una cantidad de segundos: ";
    cin >> segundos;

    horas = segundos / 3600;
    sobranteTiempo = segundos % 3600;
    minutos = sobranteTiempo / 60;
    segundos = sobranteTiempo % 60;

    cout << "Tiempo: " << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}