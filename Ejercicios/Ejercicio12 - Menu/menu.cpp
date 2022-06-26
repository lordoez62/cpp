#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;

    while (true) {
        cout << "*****" << endl;
        cout << "Menu" << endl;
        cout << "*****" << endl;

        cout << "1. Cafe y Granitas" << endl;
        cout << "2. Reposteria" << endl;
        cout << "0. Salir del sistema." << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcion;

        if (opcion == 1) 
        {
            system("cls");
            cout << "Ingreso al menu de Cafe y Granitas" << endl;
            system("pause");
        }

        if (opcion == 2)
        {
            system("cls");
            cout << "Ingreso al menu de reposteria" << endl;
            system("pause");
        }

        if (opcion == 0)
        {
            break;
        }        

    }

    cout << endl;
    cout << "Saliste del sistema.";

    return 0;
}
