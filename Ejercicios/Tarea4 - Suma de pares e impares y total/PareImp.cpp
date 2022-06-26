#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int pares = 0;
    int impares = 0;
    int total = 0;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0 )
        {
            pares = pares + i;
        }
        
        cout << i << " ";
    }

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 1 )
        {
            impares = impares + i;
        }
    }

    total = pares + impares;

    cout << endl;
    cout << endl;

    cout << "Total pares: " << pares << endl;
    cout << "Total impares: " << impares << endl;
    cout << "El total pares mas impares es: " << total << endl;

    return 0;
}
