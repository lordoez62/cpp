#include <iostream>

using namespace std;

string nombreCompleto(string nombre, string apellido){
    return nombre +  " " + apellido;
}


int main(int argc, char const *argv[])
{

    string primerNombre = "";
    string primerApellido = "";

    cout << "Ingrese su primer nombre: ";
    cin >> primerNombre;
    cout << endl;
    cout << "Ingrese su primer apellido: ";
    cin >> primerApellido;
    cout << endl;

    system("cls");
    cout << "Su nombre completo es: " << nombreCompleto(primerNombre , primerApellido);


    return 0;
}
