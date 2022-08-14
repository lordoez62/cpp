#include <iostream>

using namespace std;

string usuarios [3][3];
int profile;

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
    usuarios[2][0] = "vendedor";
    usuarios[2][1] = "54321";
    usuarios[2][2] = "vendedor";

    // fila 3
    usuarios[3][0] = "9";
}

int sysadmin(string usuario, string contrasena)
{
    for (int i = 0; i < 3; i++)
    {
        if (usuarios[i][0] == usuario && usuarios [i][1] == contrasena && usuarios [i][2] == "sysadmin")
        {
            return 1;
        }
        
        else if (usuarios[i][0] == usuario && usuarios [i][1] == contrasena && usuarios [i][2] == "cajero")
        {
            return 2;
        }

        else if (usuarios[i][0] == usuario && usuarios [i][1] == contrasena && usuarios [i][2] == "vendedor")
        {
            return 3;
        }

        else if (usuarios[i][0] == usuario)
        {
            return 4;
        }
    }

    return false;
}

