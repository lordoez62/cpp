#include <iostream>

using namespace std;

extern void productos(int opcion);

void menu()
{
    int opcion = 0;

    while(true)
    {
        system ("cls");
        cout << endl;
        cout << "****Menu*****" << endl;
        cout << endl;
        cout << endl;
        cout << "1. Bebidas calientes" << endl;
        cout << "2. Bebidas frias" << endl;
        cout << "3. Reposteria" << endl;
        cout << "4. Imprimir factura" << endl;
        cout << "0. Salir del sistema." << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
    
        if (opcion == 0)
        {
            break;
        }

        productos(opcion);
    }
}