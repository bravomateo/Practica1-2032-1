#include <iostream>
using namespace std;

int main()
{
    char selOperacion = '/'; 
    int resultado = 0, numeroA = 3, numeroB = 5;

    if (selOperacion == '+') {
        resultado = numeroA + numeroB;
    }
    else if (selOperacion == '-') {
        resultado = numeroA - numeroB;
    }
    else if (selOperacion == '*') {
        resultado = numeroA * numeroB;
    }
    else if (selOperacion == '/') {
        resultado = numeroA / numeroB;
    }

    cout << numeroA << selOperacion << numeroB <<"="<<resultado<< endl;
    return 0;
}

