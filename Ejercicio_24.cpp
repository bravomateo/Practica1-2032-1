#include <iostream>
using namespace std;

int main()
{
    int dimension;
    cout << "Ingrese un numero entero: ";
    cin >> dimension;

    // Fila superior
    for (int i = 0; i < dimension; i++) {
        cout << "+";
    }
    cout << endl;

    // Fila intermedia
    for (int i = 0; i < dimension - 2; i++) {
        cout << "+";
        for (int j = 0; j < dimension - 2; j++) {
            cout << " ";
        }
        cout << "+" << endl;
    }

    // Fila inferior 
    for (int i = 0; i < dimension; i++) {
        cout << "+";
    }
    cout << endl;

    return 0;
}