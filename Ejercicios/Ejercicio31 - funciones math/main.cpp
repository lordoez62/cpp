#include <iostream>
#include <math.h>
#define Pi 3.1436

using namespace std;

int main(int argc, char const *argv[])
{
    float numero = 0;
    float seno = 0;
    float coseno = 0;
    float tangente = 0;

    numero = 2*Pi;
    seno = sin(numero);
    coseno = cos(numero);
    tangente = tan(numero);

    cout << "Numero: " << numero << endl;
    cout << "seno: " << seno << endl;
    cout << "coseno: " << coseno << endl;
    cout << "tangente: " << tangente << endl;

    return 0;
}
