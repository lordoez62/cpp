#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Datos de entrada
    
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;
    int descuento;
    double calculoDesc = 0;
    double calculoImp = 0;
    char exenta;

    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;

    cout << "Ingrese el descuento (0, 10, 15, 20): ";
    cin >> descuento;

    cout << "Es factura exenta? Ingrese S/N: ";
    cin >> exenta;

    
    
    // Proceso 1

    if (exenta == 'S' || exenta == 's')
    {

         calculoDesc = (subtotal * descuento) / 100; 
         total = subtotal - calculoDesc;

    // Salida 1

         cout << endl;
         cout << "Total a pagar es: " << total;
    }
    
    // Proceso 2

    else if (exenta == 'N' || exenta == 'n')
    {   
         calculoDesc = (subtotal * descuento) / 100; 
         calculoImp = (subtotal - calculoDesc) * impuesto;
         total = subtotal - calculoDesc + calculoImp;
    
    // Salida 2

         cout << endl;
         cout << "Total a pagar es: " << total;
    }

    //Error

    else

    {
         cout << "Error!!! Letra ingresada invalida.";
    }
    
    return 0;
}