#include <iostream>
using namespace std;


/*
    Triángulo equilatero: tiene tres lados iguales.
    Triángulo isosceles: tiene dos lados iguales y uno diferente.
    Triángulo escaleno: tiene los tres lados diferentes.
*/

bool esTriangulo(int a, int b, int c);

int main()
{
    int ladoA = 3, ladoB = 3, ladoC = 5;

    if ( esTriangulo(ladoA, ladoB, ladoC) ) {
        if (ladoA == ladoB && ladoB == ladoC && ladoA == ladoC) {
            cout << "Se forma un triagulo equilatero " << endl;
        }
        else if (ladoA == ladoB || ladoB == ladoC || ladoA == ladoC) {
            cout << "Se forma un triagulo isosceles " << endl;
        }
        else {
            cout << "Se forma un triagulo escaleno " << endl;
        }
    }
    else {
        cout << "Las longitudes ingresadas no forman un triangulo" << endl;
    }

    return 0;
}


bool esTriangulo(int a, int b, int c){

    if ( (a < b + c) && (b < a + c) && (c < a + b) ){
        return true;
    }
    else{
        return false;
    }
}

