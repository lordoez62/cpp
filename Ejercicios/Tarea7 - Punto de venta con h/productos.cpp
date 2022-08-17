#include <iostream>
#include "factura.h"

using namespace std;

void productos(int opcion)
{
    system("cls");
    int opcionProductos = 0;

    switch (opcion)
    {
        case 1: // Bebidas calientes
        {
            cout << "BEBIDAS CALIENTES" << endl;
            cout << "*****************" << endl;
            cout << "1. Capuccino" << endl;
            cout << "2. Expresso" << endl;
            cout << "3. Americano" << endl;
            cout << "0. Salir del sistema." << endl;
            cout << endl;
            cout << "Ingrese una opcion: ";
            cout << endl;
            cin >> opcionProductos;
            cout << endl;
            
            switch (opcionProductos)
            {
                case 1:
                {
                    agregarProductos("1 Capuccino ------------- 40", 1, 40);
                    break;
                }
    
                case 2:
                {
                    agregarProductos("1 Expresso -------------- 30", 1, 30);
                    break;
                }

                case 3:
                {
                    agregarProductos("1 Americano -------------- 35", 1, 35);
                    break;
                }
                
                default:
                {
                    cout << "Opcion no valida";
                    return;
                    break;
                }  
            }
            cout << "Producto agregado" << endl;
            system("pause");
        }

        case 2: // Bebidas frias
        {
            cout << "BEBIDAS FRIAS" << endl;
            cout << "*****************" << endl;
            cout << "1. Granita de cafe" << endl;
            cout << "2. Granita de fruta" << endl;
            cout << "3. Pina colada" << endl;
            cout << "0. Salir del sistema." << endl;
            cout << endl;
            cout << "Ingrese una opcion: ";
            cout << endl;
            cin >> opcionProductos;
            cout << endl;
            
            switch (opcionProductos)
            {
                case 1:
                {
                    agregarProductos("1 Granita de cafe ------------- 45", 1, 45);
                    break;
                }

                case 2:
                {
                    agregarProductos("1 Granita de fruta -------------- 37", 1, 37);
                    break;
                }
                case 3:
                {
                    agregarProductos("1 Pina colada -------------- 35", 1, 35);
                    break;
                }
                
                default:
                {
                    cout << "Opcion no valida";
                    return;
                    break;
                }  
            }
            cout << "Producto agregado" << endl;
            system("pause");
        }
            
        case 3: // Reposteria
        {
            cout << "REPOSTERIA" << endl;
            cout << "*****************" << endl;
            cout << "1. Cheese cake" << endl;
            cout << "2. Pan de maiz" << endl;
            cout << "3. Galletas de chocolate" << endl;
            cout << "0. Salir del sistema." << endl;
            cout << endl;
            cout << "Ingrese una opcion: ";
            cout << endl;
            cin >> opcionProductos;
            cout << endl;
            
            switch (opcionProductos)
            {
                case 1:
                {
                    agregarProductos("1 Cheese cake ------------- 70", 1, 70);
                    break;
                }

                case 2:
                {
                    agregarProductos("1 Pan de maiz -------------- 40", 1, 40);
                    break;
                }
                case 3:
                {
                    agregarProductos("1 Galletas de chocolate -------------- 25", 1, 25);
                    break;
                }
                
                default:
                {
                    cout << "Opcion no valida";
                    return;
                    break;
                }  
            }
            cout << "Producto agregado" << endl;
            system("pause");
        }

        default:
        break;
    }
}