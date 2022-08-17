#include <iostream>

using namespace std;

extern void agregarProductos(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
    system("cls");
    int opcionProductos;

    switch (opcion)
    {
        case 1:
        {
            cout << "BEBIDAS CALIENTES" << endl;
            cout << "*****************" << endl;
            cout << "1. Capuccino" << endl;
            cout << "2. Expresso" << endl;
            cout << "3. Piña colada" << endl;
            cout << "4. Granita de fruta" << endl;
            cout << "0. Salir del sistema." << endl;
            cout << "Ingrese una opcion: ";
            cin >> opcionProductos;
            cout << endl;
            cout << endl;
            
            switch (opcionProductos)
            {
                case 1:
                {
                    agregarProductos("Capuccino ------------- 40", 1, 40);
                    break;
                }
    
                 case 2:
                {
                    agregarProductos("Capuccino ------------- 30", 1, 30);
                    break;
                }
                
                default:
                cout << "Opcion no valida";
                break;
            }
        }
        
        case 2:
        {
            cout << "BEBIDAS FRIAS" << endl;
            cout << "*****************" << endl;
            break;
        }
        
        case 3:
        {
            cout << "REPOSTERIA" << endl;
            cout << "*****************" << endl;
            break;
        }

        default:
        break;
    }
}