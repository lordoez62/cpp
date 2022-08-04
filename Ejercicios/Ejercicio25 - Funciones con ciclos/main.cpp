#include <iostream>

using namespace std;

void imprimirCaracteres(char caracter, int ciclos)
{
    for (int i = 0; i < ciclos; i++)
    {
        cout << caracter;     
    }
    
}

int main(int argc, char const *argv[])
{
    imprimirCaracteres('@' , 10);
    cout << endl;
    imprimirCaracteres('#' , 5);
    cout << endl;
    cout << "Hola Mundo" << endl;
    imprimirCaracteres ('*', 1000);
    return 0;
}
