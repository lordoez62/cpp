#include <iostream> 
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numeroDeDado1;
    int numeroDeDado2;

    srand(time(NULL));

    numeroDeDado1 = rand() % 12 + 1;


    numeroDeDado2 = rand() % 12 + 1;

    cout << "El resultado del primer dado es: " << numeroDeDado1 << endl;
    cout << "El resultado del segundo dado es: " << numeroDeDado2 << endl;

    return 0;
}
