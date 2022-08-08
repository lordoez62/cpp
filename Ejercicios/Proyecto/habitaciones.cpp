#include <iostream>

using namespace std;

string habitaciones [5][4];
bool estado = true;

void habitacionesDisp (int)
{
    // fila 0
    habitaciones[0][0] = 1;
    habitaciones[0][1] = "Disponible";
    habitaciones[0][2] = "Limpia";
    habitaciones[0][3] = "1500";
    
    // fila 1
    habitaciones[1][0] = 2;
    habitaciones[1][1] = "Disponible";
    habitaciones[1][2] = "Limpia";
    habitaciones[1][3] = "2300";

    // fila 2
    habitaciones[2][0] = 3;
    habitaciones[2][1] = "Disponible";
    habitaciones[2][2] = "Limpia";
    habitaciones[2][3] = "3300";

    // fila 2
    habitaciones[3][0] = 4;
    habitaciones[3][1] = "Disponible";
    habitaciones[3][2] = "Limpia";
    habitaciones[3][3] = "4200";
    
    // fila 2
    habitaciones[4][0] = 5;
    habitaciones[4][1] = "Disponible";
    habitaciones[4][2] = "Limpia";
    habitaciones[4][3] = "5300";

}