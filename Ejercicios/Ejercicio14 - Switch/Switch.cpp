#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion;

    cout << "Ingrese una opcion: ";
    cin >> opcion;

    switch (opcion)
    {
        {
        case 1:
        cout << "Escogiste la opcion 1" << endl;
        cout << "Segunda opcion de a linea 1" << endl;
        break;
        }

        case 2:
        cout << "Escogiste la opcion 3" << endl;
        break;

        case 3:
        cout << "Escogiste la opcion 3" << endl;
        break;

        default:
        cout << "Ingrese una opcion del 1 al 3" << endl;
        break;

    }

    return 0;
}
