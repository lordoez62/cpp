#include <iostream>
#include "login.h"
#include "habitaciones.h"

using namespace std;

int main(int argc, char const *argv[])
{
    inicioSesion();
    int contador = 1;
    int opcion = 0;
    string usuario = "";
    string contrasena = "";
    string habitacion = "";
    string estado = "";
    bool estado1 = true;
    bool estado2 = true;
    string nombre1 = "";
    string nombre2 = "";
    string nombre3 = "";
    string nombre4 = "";
    string nombre5 = "";
    string apellido1 = "";
    string apellido2 = "";
    string apellido3 = "";
    string apellido4 = "";
    string apellido5 = "";


    while (true) // Acceso al sistema
    {
        system("cls");
        cout<< "Acceso al sistema" << endl;
        cout<< "*****************" << endl;
        cout<< endl;

        cout<< "Ingrese su usuario: "<< endl;
        cin>> usuario;
        cout<< "Ingrese su contrasena: ";
        cin>> contrasena;

        bool resultado = autenticar(usuario, contrasena);
        if (resultado == true)
        {
            break;
        }
        else
        {
            system("cls");
            cout<< "Usuario o contrasena incorrecta. Intento "<< contador <<"/3" << endl;
            
            if (contador == 3)
            {
                return 1;
            }
            contador ++;
            system("pause");
        }
        
    }

    cout<< "Bienvenido al sistema de reservas del hotel" << endl;
    cout<< "-------------------------------------------" << endl;
    cout<< "Seleccione una opcion: " << endl;
    cout<< "1. Check in" << endl;
    cout<< "2. Seleccionar la habitacion" << endl;
    cout<< "***El sistema se encuentra en construccion***" << endl;
    cin>> opcion;


    switch (opcion)
    {
        case 1:
        break;

        case 2:

        //Chequeo de habitaciones
          {
            system("cls");
            int seleccion;
            string hab1 = "1. A001";
            string hab2 = "2. A002";
            string hab3 = "3. A003";
            string hab4 = "4. A004";
            string hab5 = "5. A005";
            string tipo1 = " ------ Habitacion sencilla ---- ";
            string tipo2 = " ------ Habitacion doble ---- ";
            string tipo3 = " ------ Suite sencilla ---- ";
            string tipo4 = " ------ Suite doble ---- ";
            string tipo5 = " ------ Suite presidencial ---- ";
            string stat1 = "Disponible";
            string stat2 = "Disponible";
            string stat3 = "Disponible";
            string stat4 = "Disponible";
            string stat5 = "Disponible";
            string lim1 = "Limpia";
            string lim2 = "Limpia";
            string lim3 = "Limpia";
            string lim4 = "Limpia";
            string lim5 = "Limpia";
            char resp;
            int cuenta = 0;
            int pre1 = 1500;
            int pre2 = 2300;
            int pre3 = 3300;
            int pre4 = 4200;
            int pre5 = 5300;
            
            cout<< "Estas son las habitaciones dispinibles, porfavor selecciona una:" << endl;
            cout<< endl;
            cout<< endl;
            cout<< hab1 << tipo1 << stat1 <<" ------ "<< "L" << pre1 << endl;
            cout<< hab2 << tipo2 << stat2 <<" ------ "<< "L" << pre2 << endl;
            cout<< hab3 << tipo3 << stat3 <<" ------ "<< "L" << pre3 << endl;
            cout<< hab4 << tipo4 << stat4 <<" ------ "<< "L" << pre4 << endl;
            cout<< hab5 << tipo5 << stat5 <<" ------ "<< "L" << pre5 << endl;
            cout<< endl;
            cout<< "O presiona 9 para volver al menu anterior / 0 para salir del sistema" << endl;
            cin>> seleccion;
            cout<< endl;

            switch (seleccion)
            {
            case 1: // Habitacion 1
            {
                if (stat1 == "Ocupada" && lim1 == "Sucia")
                {
                    cout << "Error, la habitacion esta ocupada y aun falta la limpieza";
                }
                
                else if (stat1 == "Disponible" && lim1 == "Sucia")
                {
                    cout << "Error, a la habitacion aun le falta la limpieza";
                }
                
                else if (stat1 == "Ocupada" && lim1 == "Limpia")
                {
                    cout << "Error, la habitacion esta ocupada";
                }
                
                else if (stat1 == "Disponible" && lim1 == "Limpia")
                {
                    cout<< "Ingrese el nombre del cliente: ";
                    cin>> nombre1; 
                    cout<< "Ingrese el apellido del cliente: ";
                    cin>> apellido1;
                    cout<< "Esta seguro de registrar al cliente " << nombre1 << " " << apellido1 << " en la habitacion" << hab1 << "? Presione Y o N" << endl;
                    cin>> resp;
                    system("cls");

                    if(resp == 'Y')
                    {
                    cout<< "Se registro al cliente " << nombre1 << " " << apellido1 << " en la habitacion" << hab1;
                    cout<< endl;
                    stat1 = "Ocupada";    
                    }

                    if(resp == 'y')
                    {
                    cout<< "Se registro al cliente " << nombre1 << " " << apellido1 << " en la habitacion" << hab1;
                    cout<< endl;
                    stat1 = "Ocupada";    
                    }

                    else if (resp == 'N')
                    {
                        cout<< "Se ha cancelado el registro" << endl;
                        cout<< endl;
                    }
        
                    else if (resp == 'n')
                    {
                        cout<< "Se ha cancelado el registro" << endl;
                        cout<< endl;
                    }

                    else
                    {
                        cout<< "La tecla presionada es invalida" << endl;;
                        system("pause");
                    }
                }
                 
            }

            case 2: // Habitacion 2
            {
                if (stat2 == "Ocupada" && lim2 == "Sucia")
                {
                    cout << "Error, la habitacion esta ocupada y aun falta la limpieza";
                }
                
                else if (stat2 == "Disponible" && lim2 == "Sucia")
                {
                    cout << "Error, a la habitacion aun le falta la limpieza";
                }
                
                else if (stat2 == "Ocupada" && lim2 == "Limpia")
                {
                    cout << "Error, la habitacion esta ocupada";
                }
                
                else if (stat2 == "Disponible" && lim2 == "Limpia")
                {
                    cout<< "Ingrese el nombre del cliente: ";
                    cin>> nombre2; 
                    cout<< "Ingrese el apellido del cliente: ";
                    cin>> apellido2;
                    cout<< "Esta seguro de registrar al cliente " << nombre2 << " " << apellido2 << " en la habitacion" << hab2 << "? Presione Y o N" << endl;
                    cin>> resp;
                    system("cls");

                    if(resp == 'Y')
                    {
                    cout<< "Se registro al cliente " << nombre2 << " " << apellido2 << " en la habitacion" << hab2;
                    cout<< endl;
                    stat2 = "Ocupada";    
                    }

                    if(resp == 'y')
                    {
                    cout<< "Se registro al cliente " << nombre2 << " " << apellido2 << " en la habitacion" << hab2;
                    cout<< endl;
                    stat2 = "Ocupada";    
                    }

                    else if (resp == 'N')
                    {
                        cout<< "Se ha cancelado el registro" << endl;
                        cout<< endl;
                    }
        
                    else if (resp == 'n')
                    {
                        cout<< "Se ha cancelado el registro" << endl;
                        cout<< endl;
                    }

                    else
                    {
                        cout<< "La tecla presionada es invalida" << endl;;
                        system("pause");
                    }
                }
                 
            }

            case 3: // Habitacion 3
            {
                if (stat3 == "Ocupada" && lim3== "Sucia")
                {
                    cout << "Error, la habitacion esta ocupada y aun falta la limpieza";
                }
                
                else if (stat3 == "Disponible" && lim3 == "Sucia")
                {
                    cout << "Error, a la habitacion aun le falta la limpieza";
                }
                
                else if (stat3 == "Ocupada" && lim3 == "Limpia")
                {
                    cout << "Error, la habitacion esta ocupada";
                }
                
                else if (stat3 == "Disponible" && lim3 == "Limpia")
                {
                    cout<< "Ingrese el nombre del cliente: ";
                    cin>> nombre3; 
                    cout<< "Ingrese el apellido del cliente: ";
                    cin>> apellido3;
                    cout<< "Esta seguro de registrar al cliente " << nombre3 << " " << apellido3 << " en la habitacion" << hab3 << "? Presione Y o N" << endl;
                    cin>> resp;
                    system("cls");

                    if(resp == 'Y')
                    {
                    cout<< "Se registro al cliente " << nombre3 << " " << apellido3 << " en la habitacion" << hab3;
                    cout<< endl;
                    stat1 = "Ocupada";    
                    }

                    if(resp == 'y')
                    {
                    cout<< "Se registro al cliente " << nombre3 << " " << apellido3 << " en la habitacion" << hab3;
                    cout<< endl;
                    stat3 = "Ocupada";    
                    }

                    else if (resp == 'N')
                    {
                        cout<< "Se ha cancelado el registro" << endl;
                        cout<< endl;
                    }
        
                    else if (resp == 'n')
                    {
                        cout<< "Se ha cancelado el registro" << endl;
                        cout<< endl;
                    }

                    else
                    {
                        cout<< "La tecla presionada es invalida" << endl;;
                        system("pause");
                    }
                }
                 
            }
            
            case 4: // Habitacion 4
            {
                if (stat4 == "Ocupada" && lim4 == "Sucia")
                {
                    cout << "Error, la habitacion esta ocupada y aun falta la limpieza";
                }
                
                else if (stat4 == "Disponible" && lim4 == "Sucia")
                {
                    cout << "Error, a la habitacion aun le falta la limpieza";
                }
                
                else if (stat4 == "Ocupada" && lim4 == "Limpia")
                {
                    cout << "Error, la habitacion esta ocupada";
                }
                
                else if (stat4 == "Disponible" && lim4 == "Limpia")
                {
                    cout<< "Ingrese el nombre del cliente: ";
                    cin>> nombre4; 
                    cout<< "Ingrese el apellido del cliente: ";
                    cin>> apellido4;
                    cout<< "Esta seguro de registrar al cliente " << nombre4 << " " << apellido4 << " en la habitacion" << hab4 << "? Presione Y o N" << endl;
                    cin>> resp;
                    system("cls");

                    if(resp == 'Y')
                    {
                    cout<< "Se registro al cliente " << nombre4 << " " << apellido4 << " en la habitacion" << hab4;
                    cout<< endl;
                    stat1 = "Ocupada";    
                    }

                    if(resp == 'y')
                    {
                    cout<< "Se registro al cliente " << nombre4 << " " << apellido4 << " en la habitacion" << hab4;
                    cout<< endl;
                    stat2 = "Ocupada";    
                    }

                    else if (resp == 'N')
                    {
                        cout<< "Se ha cancelado el registro" << endl;
                        cout<< endl;
                    }
        
                    else if (resp == 'n')
                    {
                        cout<< "Se ha cancelado el registro" << endl;
                        cout<< endl;
                    }

                    else
                    {
                        cout<< "La tecla presionada es invalida" << endl;;
                        system("pause");
                    }
                }
                 
            }

            case 5: // Habitacion 5
            {
                if (stat5 == "Ocupada" && lim5 == "Sucia")
                {
                    cout << "Error, la habitacion esta ocupada y aun falta la limpieza";
                }
                
                else if (stat5 == "Disponible" && lim5 == "Sucia")
                {
                    cout << "Error, a la habitacion aun le falta la limpieza";
                }
                
                else if (stat5 == "Ocupada" && lim5 == "Limpia")
                {
                    cout << "Error, la habitacion esta ocupada";
                }
                
                else if (stat5 == "Disponible" && lim5 == "Limpia")
                {
                    cout<< "Ingrese el nombre del cliente: ";
                    cin>> nombre5; 
                    cout<< "Ingrese el apellido del cliente: ";
                    cin>> apellido5;
                    cout<< "Esta seguro de registrar al cliente " << nombre5 << " " << apellido5 << " en la habitacion" << hab5 << "? Presione Y o N" << endl;
                    cin>> resp;
                    system("cls");

                    if(resp == 'Y')
                    {
                    cout<< "Se registro al cliente " << nombre5 << " " << apellido5 << " en la habitacion" << hab5;
                    cout<< endl;
                    stat5 = "Ocupada";    
                    }

                    if(resp == 'y')
                    {
                    cout<< "Se registro al cliente " << nombre5 << " " << apellido5 << " en la habitacion" << hab5;
                    cout<< endl;
                    stat2 = "Ocupada";    
                    }

                    else if (resp == 'N')
                    {
                        cout<< "Se ha cancelado el registro" << endl;
                        cout<< endl;
                    }
        
                    else if (resp == 'n')
                    {
                        cout<< "Se ha cancelado el registro" << endl;
                        cout<< endl;
                    }

                    else
                    {
                        cout<< "La tecla presionada es invalida" << endl;;
                        system("pause");
                    }
                }
                 
            }

            default:
                break;
            }
            

            if (seleccion == 0)
            {
                break;
            }
          }
        
    
        break;
    
        default:
        break;
    }


    return 0;
}
