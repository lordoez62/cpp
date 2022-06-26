#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Variables
    double a = 0;
    double b = 0;
    double suma;
    double resta;
    double mult;
    double div;
    
    //Ingreso de datos
    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << endl;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    //Proceso
    suma = a + b;
    resta = a - b;
    mult = a * b;
    div = a / b;
    cout << endl;

    //Impresion de resultado
    cout << "La suma de a + b es: " << suma << endl;
    cout << "La resta de a - b es: " << resta << endl;
    cout << "La multiplicacion de a * b es: " << mult << endl;
    cout << "La division de a / b es: " << div << endl;

    return 0;
}