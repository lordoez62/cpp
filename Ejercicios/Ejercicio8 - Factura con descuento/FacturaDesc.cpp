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

    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;

    cout << "Ingrese el descuento (0, 10, 15, 20): ";
    cin >> descuento;

    // Proceso
    
    calculoDesc = (subtotal * descuento) / 100; 
    calculoImp = (subtotal - calculoDesc) * impuesto;
    total = subtotal - calculoDesc + calculoImp;

    //Salida

    cout << endl;
    cout << "Total a pagar es: " << total;


    return 0;
}
