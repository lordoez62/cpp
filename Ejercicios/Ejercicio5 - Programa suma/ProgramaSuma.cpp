#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Variables
    int a = 0;
    int b = 0;
    int resultado;
    
    //Ingreso de datos
    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << endl;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    //Proceso
    resultado = a + b;
    cout << endl;

    //Impresion de resultado
    cout << "La suma de a + b es: " << resultado;

    return 0;
}
