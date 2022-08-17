#include <iostream>

using namespace std;


int opcion;

int agregarProducto(string producto, int cantidad, int precio)
{
    
}

void imprimirCaracteres (char caracter, int hasta)
{
    for (int i = 0; i < hasta; i++)
    {
        cout << caracter;
    }
}

void bebidasCalientes()
{
    imprimirCaracteres('*', 7);
    cout << endl;
    cout << "Menu de bebidas calientes" << endl;
    imprimirCaracteres('*', 7);
    cout << endl;
    cout << "1. Capuchino" << endl;
    cout << "2. Mocca" << endl;
    cout << "3. Expresso" << endl;
    cout << "4. Americano" << endl;
    cout << "0. Salir del sistema." << endl;
    cout << "Ingrese una opcion: ";
}

void bebidasFrias()
{
    imprimirCaracteres('*', 7);
    cout << endl;
    cout << "Menu de bebidas frias" << endl;
    imprimirCaracteres('*', 7);
    cout << endl;
    cout << "1. Granita de cafe" << endl;
    cout << "2. Moccachino Supreme" << endl;
    cout << "3. Piña colada" << endl;
    cout << "4. Granita de fruta" << endl;
    cout << "0. Salir del sistema." << endl;
    cout << "Ingrese una opcion: ";
}

void reposteria()
{
    imprimirCaracteres('*', 7);
    cout << endl;
    cout << "Menu de bebidas frias" << endl;
    imprimirCaracteres('*', 7);
    cout << endl;
    cout << "1. Pan de maiz" << endl;
    cout << "2. Galleta de chocolate" << endl;
    cout << "3. Cheese cake" << endl;
    cout << "4. Torta de zanahoria" << endl;
    cout << "0. Salir del sistema." << endl;
    cout << "Ingrese una opcion: ";
}

void menu()
{
    int seleccion;
    imprimirCaracteres('*', 7);
    cout << endl;
    cout << "Menu" << endl;
    imprimirCaracteres('*', 7);
    cout << endl;
    cout << "1. Bebidas calientes" << endl;
    cout << "2. Bebidas frias" << endl;
    cout << "3. Reposteria" << endl;
    cout << "0. Salir del sistema." << endl;
    cout << "Ingrese una opcion: ";
    cin >> seleccion;

    switch (seleccion)
    {
    case 1:
    {
        bebidasCalientes();
    }

    case 2:
    {
        bebidasFrias();
    }

    case 3:
    {
        reposteria();
    }
    
    default:
        break;
    }
}

bool login ()
{
    string usuario;
    string contrasena;

    cout << "Ingrese el usuario: " << endl;
    cin >> usuario;
    cout << "Ingrese su contrasena: " << endl;
    cin >> contrasena;

    if (usuario == "admin" && contrasena == "123")
    {
        return true;
    }

    cout << "Usuario o contraseña incorrecta";
    return false;
}



int main(int argc, char const *argv[])
{
    bool respuesta = login();
    if (respuesta == true)
    {
        cout << "Bienvenido al sistema" << endl;
        menu();
    }

    return 0;
}
