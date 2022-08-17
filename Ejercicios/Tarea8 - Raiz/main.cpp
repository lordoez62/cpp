#include <iostream>
#include <math.h>

using namespace std;

float resultado;
float numero;

void raizC(int numero)
{
    resultado = sqrt (numero);
}


int main(int argc, char const *argv[])
{
    cout << "Ingrese el numero para calcular su raiz: ";
    cin >> numero;
    raizC(numero);
    cout << "Su raiz es: " << resultado;
    return 0;
}
