#include <iostream>

using namespace std;

string usuarios [3][3];

void inicioSesion ()
{
    // fila 0
    usuarios[0][0] = "sysadmin";
    usuarios[0][1] = "sysadmin";
    usuarios[0][2] = "sysadmin";
    
    // fila 1
    usuarios[1][0] = "caja";
    usuarios[1][1] = "12345";
    usuarios[1][2] = "cajero";
    
    // fila 2
    usuarios[2][0] = "vendendor";
    usuarios[2][1] = "54321";
    usuarios[2][2] = "vendedor";
}

bool autenticar(string usuario, string contrasena)
{
    for (int i = 0; i < 3; i++)
    {
        if (usuarios[i][0] == usuario && usuarios [i][1] == contrasena)
        {
            return true;
        }
    }

    return false;
}
