#include <iostream>

using namespace std;

double totPagar;
double impuesto;
double subtotal;
string listaProductos;

void agregarProductos(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
}


void imprimirFactura()
{
    impuesto = subtotal * 0.15;
    totPagar = subtotal + impuesto;
    system("cls");
    cout << "*******" << endl;
    cout << "Factura" << endl;
    cout << "*******" << endl;
    cout << endl;

    cout << "Productos" << endl;
    cout << listaProductos;

    cout << endl;
    cout << "Subtotal: " << subtotal;
    cout << endl;
    cout << "ISV: " << impuesto;
    cout << endl;
    cout << "Total a pagar: " << totPagar;
    cout << endl;
    cout << endl;
    system("pause");   
}