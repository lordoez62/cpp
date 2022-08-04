#include <iostream>

using namespace std;


int sumar (int a, int b){
    return a + b;
}

int restar (int a, int b){
    return a - b;
}

int calculadora (int a, int b, char operador){
    if (operador == '+'){ 
    return sumar(a , b);
    }

    else if (operador == '-')
    {
    return restar(a , b); 
    }

    throw "El operador no es valido";
    
}

int main(int argc, char const *argv[])
{
    int n1 = 0;
    int n2 = 0;
    char operador;
    int resultado = 0;

    cout << "Ingrese a: ";
    cin >> n1;
    cout << "Ingrese b: ";
    cin >> n2;
    cout << "Ingrese el operador (+, -, *, /):";
    cout << endl;
    cin >> operador;
    cout << endl;

    try
    {
        system("cls");
        resultado = calculadora (n1, n2, operador);
        cout<< "Resultado de " << n1 << " "<< operador << "" << n2 << " es: ";
        cout<< resultado;

    }
    catch(const char* error)
    {
        cout << error;
    }


    return 0;
}
