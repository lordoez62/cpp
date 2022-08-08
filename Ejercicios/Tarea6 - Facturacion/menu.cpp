#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion;

    while (opcion != 0) {
        cout << "*****" << endl;
        cout << "Menu" << endl;
        cout << "*****" << endl;

        cout << "1. Bebidas calientes" << endl;
        cout << "2. Bebidas frias" << endl;
        cout << "3. Reposteria" << endl;
        cout << "0. Salir del sistema." << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcion;

        
        if (opcion == 0)
        {
            break;
        }        

        switch (opcion)
        {
            case 1: 
            while (true)
                { 
                    system("cls");
                    cout << "*****" << endl;
                    cout << "Ingreso al menu de bebidas frias" << endl;
                    cout << "*****" << endl;

                    cout << "1. Granita de frutas" << endl;
                    cout << "2. Granita de cafe" << endl;
                    cout << "3. Moccachino" << endl;
                    cout << "4. Menu anterior" << endl;

                    cout << "Ingrese una opcion: ";
                    cin >> opcion;
                          switch (opcion)
                             {
                                  case 1:{

                                      
                                  }
                                  
                             return;                  
                             default:
                             break;
                            }
                            system("pause");      
                            break;
                }

            case 2:
                {
                    system("cls");
                    cout << "Ingreso al menu de bebidas calientes" << endl;
                    system("pause");
                    break;
                }
            case 3:
                {
                    system("cls");
                    cout << "Ingreso al menu de reposteria" << endl;
                    system("pause");
                    break;
                }    
            default:
                cout << "Ingrese una opcion valida (0,1,2)" << endl;
                system("pause");
                break;
        }
    }

    cout << endl;
    cout << "Saliste del sistema.";

    return 0;
}
