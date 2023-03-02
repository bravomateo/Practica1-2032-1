#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));             // Inicializa el generador de números aleatorios
    int aleatorio = rand() % 101;  // Genera un número aleatorio entre 0 y 100

    int intentos = 0;
    int numeroUsuario;

    cout << "Pista ** el numero es: " << aleatorio << endl;

    cout << "Adivina el numero entre 0 y 100: " << endl;

    while (true)
    {
        cout << "Ingresa un numero entre 0 y 100: ";
        cin >> numeroUsuario;  // recibir el numero del usuario
        intentos++;            // incrementar el intento

        if (numeroUsuario == aleatorio) {
            cout << "Adivinaste el numero en " << intentos << " intentos." << endl;
            break;
        }
        else if (numeroUsuario > aleatorio) {
            cout << "El numero que ingresaste es mayor que el numero a adivinar." << endl;
        } 

        else if (numeroUsuario < aleatorio) {
            cout << "El numero que ingresaste es menor que el numero a adivinar." << endl;
        }
    }
    return 0;
}
