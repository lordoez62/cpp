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
    int cantNoc1 = 0;
    int cantNoc2 = 0;
    int cantNoc3 = 0;
    int cantNoc4 = 0;
    int cantNoc5 = 0;
    int cuenta1 = 0;
    int cuenta2 = 0;
    int cuenta3 = 0;
    int cuenta4 = 0;
    int cuenta5 = 0;
    int beb1 = 30;
    int beb2 = 55;
    int beb3 = 45;
    int beb4 = 45;
    int beb5 = 60;
    int beb6 = 80;
    int seleccion;

    string hab1 = "1. A001";
    string hab2 = "2. A002";
    string hab3 = "3. A003";
    string hab4 = "4. A004";
    string hab5 = "5. A005";
    string tipo1 = " ------ Habitacion sencilla ---- ";
    string tipo2 = " ------ Habitacion doble ------- ";
    string tipo3 = " ------ Suite sencilla --------- ";
    string tipo4 = " ------ Suite doble ------------ ";
    string tipo5 = " ------ Suite presidencial ----- ";
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
            cout<< "Usuario o contrasena incorrecta. Intento " << contador <<"/3" << endl;
            
            if (contador == 3)
            {
                return 1;
            }
            contador ++;
            system("pause");
        }
        
    }


    while (opcion != 7)
    {
    cout<< "Bienvenido al sistema de reservas del hotel" << endl;
    cout<< "-------------------------------------------" << endl;
    cout<< "Seleccione una opcion: " << endl;
    cout<< "1. Check in" << endl;
    cout<< "2. Ver habitaciones disponibles" << endl;
    cout<< "3. Restaurante" << endl;
    cout<< "4. Cuentas por pagar" << endl;
    cout<< "5. Check out" << endl;
    cout<< "6. Aseo de habitaciones" << endl;
    cout<< "7. Salir del sistema" << endl;
    cin>> opcion;


    switch (opcion)
    {
        while (seleccion != 9)
        {

        case 1: // Registro en habitaciones
        {
            system("cls"); 
            
            cout<< "Estas son las habitaciones dispinibles, porfavor selecciona una para hacer check in:" << endl;
            cout<< endl;
            cout<< endl;
            cout<< hab1 << tipo1 << stat1 <<" ------ "<< "L" << pre1 << endl;
            cout<< hab2 << tipo2 << stat2 <<" ------ "<< "L" << pre2 << endl;
            cout<< hab3 << tipo3 << stat3 <<" ------ "<< "L" << pre3 << endl;
            cout<< hab4 << tipo4 << stat4 <<" ------ "<< "L" << pre4 << endl;
            cout<< hab5 << tipo5 << stat5 <<" ------ "<< "L" << pre5 << endl;
            cout<< endl;
            cout<< "O presiona 9 para volver al menu anterior" << endl;
            cin>> seleccion;
            cout<< endl;

            if (seleccion == 9)
            {
                break;
            }

            switch (seleccion)
            {
            case 1: // Habitacion 1
            {
                if (stat1 == "Ocupada" && lim1 == "Sucia")
                {
                    cout << "Error, la habitacion esta ocupada y aun falta la limpieza" << endl;
                    system("pause");
                    break;
                }
                
                else if (stat1 == "Disponible" && lim1 == "Sucia")
                {
                    cout << "Error, a la habitacion aun le falta la limpieza" << endl;
                    system("pause");
                    break;
                }
                
                else if (stat1 == "Ocupada" && lim1 == "Limpia")
                {
                    cout << "Error, la habitacion esta ocupada" << endl;
                    system("pause");
                    break;
                }
                
                else if (stat1 == "Disponible" && lim1 == "Limpia")
                {
                    cout<< "Ingrese el nombre del cliente: ";
                    cin>> nombre1; 
                    cout<< "Ingrese el apellido del cliente: ";
                    cin>> apellido1;
                    cout<< "Ingrese la cantidad de noches que se hospedara el cliente: ";
                    cin>> cantNoc1;
                    cout<< "Esta seguro de registrar al cliente " << nombre1 << " " << apellido1 << " en la habitacion " << hab1 << "? Presione Y o N" << endl;
                    cin>> resp;
                    system("cls");

                    if(resp == 'Y')
                    {
                    cout<< "Se registro al cliente " << nombre1 << " " << apellido1 << " en la habitacion " << hab1;
                    cout<< endl;
                    cuenta1 = (pre1 * cantNoc1) + cuenta1;
                    stat1 = "Ocupada";
                    system("pause");
                    break;    
                    }

                    if(resp == 'y')
                    {
                    cout<< "Se registro al cliente " << nombre1 << " " << apellido1 << " en la habitacion " << hab1;
                    cout<< endl;
                    stat1 = "Ocupada";
                    cuenta1 = (pre1 * cantNoc1) + cuenta1;
                    system("pause");
                    break; 
                    }

                    else if (resp == 'N')
                    {
                        cout<< "Se ha cancelado el registro" << endl;
                        cout<< endl;
                        system("pause");
                        break;
                    }
        
                    else if (resp == 'n')
                    {
                        cout<< "Se ha cancelado el registro" << endl;
                        cout<< endl;
                        system("pause");
                        break;
                    }

                    else
                    {
                        cout<< "La tecla presionada es invalida" << endl;
                        system("pause");
                        break;
                    }
                }
                 
            }

            case 2: // Habitacion 2
            {
                if (stat2 == "Ocupada" && lim2 == "Sucia")
                {
                    cout << "Error, la habitacion esta ocupada y aun falta la limpieza" << endl;
                    system("pause");
                    break;
                }
                
                else if (stat2 == "Disponible" && lim2 == "Sucia")
                {
                    cout << "Error, a la habitacion aun le falta la limpieza" << endl;
                    system("pause");
                    break;
                }
                
                else if (stat2 == "Ocupada" && lim2 == "Limpia")
                {
                    cout << "Error, la habitacion esta ocupada" << endl;
                    system("pause");
                    break;
                    
                }
                
                else if (stat2 == "Disponible" && lim2 == "Limpia")
                {
                    cout<< "Ingrese el nombre del cliente: ";
                    cin>> nombre2; 
                    cout<< "Ingrese el apellido del cliente: ";
                    cin>> apellido2;
                    cout<< "Ingrese la cantidad de noches que se hospedara el cliente: ";
                    cin>> cantNoc2;
                    cout<< "Esta seguro de registrar al cliente " << nombre2 << " " << apellido2 << " en la habitacion " << hab2 << "? Presione Y o N" << endl;
                    cin>> resp;
                    system("cls");

                    if(resp == 'Y')
                    {
                        cout<< "Se registro al cliente " << nombre2 << " " << apellido2 << " en la habitacion " << hab2;
                        cout<< endl;
                        cuenta2 = (pre2 * cantNoc2) + cuenta2;
                        stat2 = "Ocupada";
                        system("pause");
                        break;     
                    }

                    if(resp == 'y')
                    {
                        cout<< "Se registro al cliente " << nombre2 << " " << apellido2 << " en la habitacion" << hab2;
                        cout<< endl;
                        cuenta2 = (pre2 * cantNoc2) + cuenta2;
                        stat2 = "Ocupada";
                        system("pause");
                        break;     
                    }

                    else if (resp == 'N')
                    {
                        cout<< "Se ha cancelado el registro" << endl;
                        cout<< endl;
                        system("pause");
                        break; 
                    }
        
                    else if (resp == 'n')
                    {
                        cout<< "Se ha cancelado el registro" << endl;
                        cout<< endl;
                        system("pause");
                        break; 
                    }

                    else
                    {
                        cout<< "La tecla presionada es invalida" << endl;;
                        system("pause");
                        break; 
                    }
                }
                 
            }

            case 3: // Habitacion 3
            {
                if (stat3 == "Ocupada" && lim3== "Sucia")
                {
                    cout << "Error, la habitacion esta ocupada y aun falta la limpieza" << endl;
                    system("pause");
                    break;
                }
                
                else if (stat3 == "Disponible" && lim3 == "Sucia")
                {
                    cout << "Error, a la habitacion aun le falta la limpieza" << endl;
                    system("pause");
                    break;
                }
                
                else if (stat3 == "Ocupada" && lim3 == "Limpia")
                {
                    cout << "Error, la habitacion esta ocupada" << endl;
                    system("pause");
                    break;
                }
                
                else if (stat3 == "Disponible" && lim3 == "Limpia")
                {
                    cout<< "Ingrese el nombre del cliente: ";
                    cin>> nombre3; 
                    cout<< "Ingrese el apellido del cliente: ";
                    cin>> apellido3;
                    cout<< "Ingrese la cantidad de noches que se hospedara el cliente: ";
                    cin>> cantNoc3;
                    cout<< "Esta seguro de registrar al cliente " << nombre3 << " " << apellido3 << " en la habitacion " << hab3 << "? Presione Y o N" << endl;
                    cin>> resp;
                    system("cls");

                    if(resp == 'Y')
                    {
                        cout<< "Se registro al cliente " << nombre3 << " " << apellido3 << " en la habitacion " << hab3;
                        cout<< endl;
                        cuenta3 = (pre3 * cantNoc3) + cuenta3;
                        stat3 = "Ocupada"; 
                        system("pause");
                        break;    
                    }

                    if(resp == 'y')
                    {
                        cout<< "Se registro al cliente " << nombre3 << " " << apellido3 << " en la habitacion " << hab3;
                        cout<< endl;
                        cuenta3 = (pre3 * cantNoc3) + cuenta3;
                        stat3 = "Ocupada"; 
                        system("pause");
                        break;    
                    }

                    else if (resp == 'N')
                    {
                        cout<< "Se ha cancelado el registro" << endl;
                        cout<< endl;
                        system("pause");
                        break; 
                    }
        
                    else if (resp == 'n')
                    {
                        cout<< "Se ha cancelado el registro" << endl;
                        cout<< endl;
                        system("pause");
                        break; 
                    }

                    else
                    {
                        cout<< "La tecla presionada es invalida" << endl;;
                        system("pause");
                        break; 
                    }
                }
                 
            }
            
            case 4: // Habitacion 4
            {
                if (stat4 == "Ocupada" && lim4 == "Sucia")
                {
                    cout << "Error, la habitacion esta ocupada y aun falta la limpieza" << endl;
                    system("pause");
                    break;
                }
                
                else if (stat4 == "Disponible" && lim4 == "Sucia")
                {
                    cout << "Error, a la habitacion aun le falta la limpieza" << endl;
                    system("pause");
                    break;
                }
                
                else if (stat4 == "Ocupada" && lim4 == "Limpia")
                {
                    cout << "Error, la habitacion esta ocupada" << endl;
                    system("pause");
                    break;
                }
                
                else if (stat4 == "Disponible" && lim4 == "Limpia")
                {
                    cout<< "Ingrese el nombre del cliente: ";
                    cin>> nombre4; 
                    cout<< "Ingrese el apellido del cliente: ";
                    cin>> apellido4;
                    cout<< "Ingrese la cantidad de noches que se hospedara el cliente: ";
                    cin>> cantNoc4;
                    cout<< "Esta seguro de registrar al cliente " << nombre4 << " " << apellido4 << " en la habitacion " << hab4 << "? Presione Y o N" << endl;
                    cin>> resp;
                    system("cls");

                    if(resp == 'Y')
                    {
                        cout<< "Se registro al cliente " << nombre4 << " " << apellido4 << " en la habitacion " << hab4;
                        cout<< endl;
                        cuenta4 = (pre4 * cantNoc4) + cuenta4;
                        stat4 = "Ocupada";
                        system("pause");
                        break;     
                    }

                    if(resp == 'y')
                    {
                        cout<< "Se registro al cliente " << nombre4 << " " << apellido4 << " en la habitacion " << hab4;
                        cout<< endl;
                        cuenta4 = (pre4 * cantNoc4) + cuenta4;
                        stat4 = "Ocupada";  
                        system("pause");
                        break;   
                    }

                    else if (resp == 'N')
                    {
                        cout<< "Se ha cancelado el registro" << endl;
                        cout<< endl;
                        system("pause");
                        break; 
                    }
        
                    else if (resp == 'n')
                    {
                        cout<< "Se ha cancelado el registro" << endl;
                        cout<< endl;
                        system("pause");
                        break; 
                    }

                    else
                    {
                        cout<< "La tecla presionada es invalida" << endl;;
                        system("pause");
                        break; 
                    }
                }
                 
            }

            case 5: // Habitacion 5
            {
                if (stat5 == "Ocupada" && lim5 == "Sucia")
                {
                    cout << "Error, la habitacion esta ocupada y aun falta la limpieza" << endl;
                    system("pause");
                    break;
                }
                
                else if (stat5 == "Disponible" && lim5 == "Sucia")
                {
                    cout << "Error, a la habitacion aun le falta la limpieza" << endl;
                    system("pause");
                    break;
                }
                
                else if (stat5 == "Ocupada" && lim5 == "Limpia")
                {
                    cout << "Error, la habitacion esta ocupada" << endl;
                    system("pause");
                    break;
                }
                
                else if (stat5 == "Disponible" && lim5 == "Limpia")
                {
                    cout<< "Ingrese el nombre del cliente: ";
                    cin>> nombre5; 
                    cout<< "Ingrese el apellido del cliente: ";
                    cin>> apellido5;
                    cout<< "Ingrese la cantidad de noches que se hospedara el cliente: ";
                    cin>> cantNoc5;
                    cout<< "Esta seguro de registrar al cliente " << nombre5 << " " << apellido5 << " en la habitacion " << hab5 << "? Presione Y o N" << endl;
                    cin>> resp;
                    system("cls");

                    if(resp == 'Y')
                    {
                        cout<< "Se registro al cliente " << nombre5 << " " << apellido5 << " en la habitacion " << hab5;
                        cout<< endl;
                        cuenta5 = (pre5 * cantNoc5) + cuenta5;
                        stat5 = "Ocupada"; 
                        system("pause");
                        break;    
                    }

                    if(resp == 'y')
                    {
                        cout<< "Se registro al cliente " << nombre5 << " " << apellido5 << " en la habitacion " << hab5;
                        cout<< endl;
                        cuenta5 = (pre5 * cantNoc5) + cuenta5;
                        stat5 = "Ocupada";  
                        system("pause");
                        break;   
                    }

                    else if (resp == 'N')
                    {
                        cout<< "Se ha cancelado el registro" << endl;
                        cout<< endl;
                        system("pause");
                        break; 
                    }
        
                    else if (resp == 'n')
                    {
                        cout<< "Se ha cancelado el registro" << endl;
                        cout<< endl;
                        system("pause");
                        break; 
                    }

                    else
                    {
                        cout<< "La tecla presionada es invalida" << endl;;
                        system("pause");
                        break; 
                    }
                }
                 
            }

            if (seleccion == 0)
            {
                break;
            }
          }
          
        }

        case 2: // Vista de habitaciones disponibles
        {
            cout<< "Estas son las habitaciones dispinibles, porfavor selecciona una:" << endl;
            cout<< endl;
            cout<< endl;
            cout<< hab1 << tipo1 << stat1 <<" ------ "<< "L" << pre1 << endl;
            cout<< hab2 << tipo2 << stat2 <<" ------ "<< "L" << pre2 << endl;
            cout<< hab3 << tipo3 << stat3 <<" ------ "<< "L" << pre3 << endl;
            cout<< hab4 << tipo4 << stat4 <<" ------ "<< "L" << pre4 << endl;
            cout<< hab5 << tipo5 << stat5 <<" ------ "<< "L" << pre5 << endl;
            cout<< endl;
            cout<< "O presiona 9 para volver al menu anterior" << endl;
            cin>> seleccion;
            cout<< endl;

            if (seleccion == 9)
            {
                break;
            }

        }

        case 3: // Restaurante
        {
            opcion = 0;
            while (opcion != 9)
            {
            cout << "************" << endl;
            cout << "----Menu----" << endl;
            cout << "************" << endl;

            cout << "1. Bebidas" << endl;
            cout << "2. Entradas / botanas" << endl;
            cout << "3. Platillos fuertes" << endl;
            cout << "4. Postres" << endl;
            cout << "9. Salir." << endl;
            cout << "Ingrese una opcion: ";
            cin >> opcion;

            switch (opcion)
            {
            case 1:
            {
                cout << "---------------------------" << endl;
                cout << "Entraste al menu de Bebidas" << endl;
                cout << "---------------------------" << endl;
                cout << endl;
                cout << "1. Botella con agua" <<"-------" << "L" << beb1 <<endl;
                cout << "2. Limonada" <<"---------------" << "L" << beb2 <<endl;
                cout << "3. Pepsi 1/2" <<"--------------" << "L" << beb3 <<endl;
                cout << "4. Coca - cola 1/2" <<"--------" << "L" << beb4 <<endl;
                cout << "5. Cerveza" <<"----------------" << "L" << beb5 <<endl;
                cout << "6. Vodka" <<"------------------" << "L" << beb6 <<endl;
                cout << "9. Salir" <<endl;
                cout << endl;

                cout << "Seleccione la bebida que desea agregar: " << endl;
                cin>> opcion;

                switch (opcion)
                {
                case 1: // Botella con agua
                {
                    cout << "A que habitacion desea cargar la botella con agua? " << endl;
                    cout << hab1 << endl;
                    cout << hab2 << endl;
                    cout << hab3 << endl;
                    cout << hab4 << endl;
                    cout << hab5 << endl;
                    cin>> opcion;

                    if (opcion == 1)
                    {
                        if(stat1 == "Ocupada")
                        {
                        cuenta1 = cuenta1 + beb1;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta1 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }
                    }
                    else if (opcion == 2)
                    {
                        if (stat2 == "Ocupada")
                        {
                        cuenta2 = cuenta2 + beb1;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta2 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }

                    }
                    else if (opcion == 3)
                    {
                        if (stat3 == "Ocupada")
                        {
                        cuenta3 = cuenta3 + beb1;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta3 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }
                    }
                    else if (opcion == 4)
                    {
                        if(stat4 == "Ocupada")
                        {
                        cuenta4 = cuenta4 + beb1;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta4 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }

                    }
                    else if (opcion == 5)
                    {
                        if(stat1 == "Ocupada")
                        {
                        cuenta5 = cuenta5 + beb1;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta5 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }
                    }
                    }
                case 2: // Limonada
                {
                    cout << "A que habitacion desea cargar la limonada? " <<endl;
                    cout << hab1 << endl;
                    cout << hab2 << endl;
                    cout << hab3 << endl;
                    cout << hab4 << endl;
                    cout << hab5 << endl;
                    cin>> opcion;

                    if (opcion == 1)
                    {
                        if(stat1 == "Ocupada")
                        {
                        cuenta1 = cuenta1 + beb2;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta1 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }
                    }
                    else if (opcion == 2)
                    {
                        if(stat2 == "Ocupada")
                        {
                        cuenta2 = cuenta2 + beb2;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta2 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }

                    }
                    else if (opcion == 3)
                    {
                        if(stat3 == "Ocupada")
                        {
                        cuenta3 = cuenta3 + beb2;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta3 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }
                    }
                    else if (opcion == 4)
                    {
                        if(stat4 == "Ocupada")
                        {
                        cuenta4 = cuenta4 + beb2;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta4 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }

                    }
                    else if (opcion == 5)
                    {
                        if(stat5 == "Ocupada")
                        {
                        cuenta5 = cuenta5 + beb2;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta5 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }

                    }
                }
                case 3 : // Pepsi
                {
                    cout << "A que habitacion desea cargar la Pepsi 1/2? " <<endl;
                    cout << hab1 << endl;
                    cout << hab2 << endl;
                    cout << hab3 << endl;
                    cout << hab4 << endl;
                    cout << hab5 << endl;
                    cin>> opcion;

                    if (opcion == 1)
                    {
                        if(stat1 == "Ocupada")
                        {
                        cuenta1 = cuenta1 + beb3;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta1 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }
                    }
                    else if (opcion == 2)
                    {
                        if (stat2 == "Ocupada")
                        {
                        cuenta2 = cuenta2 + beb3;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta2 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }
                    }
                    else if (opcion == 3)
                    {
                        if(stat3 == "Ocupada")
                        {
                        cuenta3 = cuenta3 + beb3;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta3 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }

                    }
                    else if (opcion == 4)
                    {
                        if(stat4 == "Ocupada")
                        {
                        cuenta4 = cuenta4 + beb3;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta4 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }

                    }
                    else if (opcion == 5)
                    {
                        if(stat5 == "Ocupada")
                        {
                        cuenta5 = cuenta5 + beb3;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta5 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }
                    }
                    }              
                case 4 : // Coca - cola
                {
                    cout << "A que habitacion desea cargar la Coca - cola 1/2? " <<endl;
                    cout << hab1 << endl;
                    cout << hab2 << endl;
                    cout << hab3 << endl;
                    cout << hab4 << endl;
                    cout << hab5 << endl;
                    cin>> opcion;

                    if (opcion == 1)
                    {
                        if(stat1 == "Ocupada")
                        {
                        cuenta1 = cuenta1 + beb4;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta1 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }
                    }
                    else if (opcion == 2)
                    {
                        if(stat2 == "Ocupada")
                        {
                        cuenta2 = cuenta2 + beb4;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta2 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }
                    }
                    else if (opcion == 3)
                    {
                        if(stat3 == "Ocupada")
                        {
                        cuenta3 = cuenta3 + beb4;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta3 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }
                    }
                    else if (opcion == 4)
                    {
                        if(stat4 == "Ocupada")
                        {
                        cuenta4 = cuenta4 + beb4;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta4 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }

                    }
                    else if (opcion == 5)
                    {
                        if(stat5 == "Ocupada")
                        {
                        cuenta5 = cuenta5 + beb4;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta5 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }
                    }
                    }              
                case 5 : // Cerveza
                {
                    cout << "A que habitacion desea cargar la Cerveza? " <<endl;
                    cout << hab1 << endl;
                    cout << hab2 << endl;
                    cout << hab3 << endl;
                    cout << hab4 << endl;
                    cout << hab5 << endl;
                    cin>> opcion;

                    if (opcion == 1)
                    {
                        if(stat1 == "Ocupada")
                        {
                        cuenta1 = cuenta1 + beb5;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta1 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }
                    }
                    else if (opcion == 2)
                    {
                        if(stat2 == "Ocupada")
                        {
                        cuenta2 = cuenta2 + beb5;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta2 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }
                    }
                    else if (opcion == 3)
                    {
                        if(stat3 == "Ocupada")
                        {
                        cuenta3 = cuenta3 + beb5;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta3 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }
                    }
                    else if (opcion == 4)
                    {
                        if(stat4 == "Ocupada")
                        {
                        cuenta4 = cuenta4 + beb5;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta4 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }
                    }
                    else if (opcion == 5)
                    {
                        if(stat5 == "Ocupada")
                        {
                        cuenta5 = cuenta5 + beb5;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta5 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }
                    }
                    
                }
                case 6 : // Vodka
                {
                    cout << "A que habitacion desea cargar el vodka? " <<endl;
                    cout << hab1 << endl;
                    cout << hab2 << endl;
                    cout << hab3 << endl;
                    cout << hab4 << endl;
                    cout << hab5 << endl;
                    cin>> opcion;

                    if (opcion == 1)
                    {
                        if(stat1 == "Ocupada")
                        {
                        cuenta1 = cuenta1 + beb6;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta1 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }
                    }
                    else if (opcion == 2)
                    {
                         if(stat2 == "Ocupada")
                        {
                        cuenta2 = cuenta2 + beb6;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta2 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }
                    }
                    else if (opcion == 3)
                    {
                        if(stat3 == "Ocupada")
                        {
                        cuenta3 = cuenta3 + beb6;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta3 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }

                    }
                    else if (opcion == 4)
                    {
                        if(stat4 == "Ocupada")
                        {
                        cuenta4 = cuenta4 + beb6;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta4 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                         else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }

                    }
                    else if (opcion == 5)
                    {
                        if(stat5 == "Ocupada")
                        {
                        cuenta5 = cuenta5 + beb6;
                        cout << "Se ha realizado el cargo a la cuenta de manera correcta" << endl;
                        cout << "L" << cuenta5 << endl;
                        cout << endl;
                        system("pause");
                        break;
                        }
                        else
                        {
                            cout << "Error! No se puede realizar el cargo ya que la habitacion no esta habitada." << endl;
                            system("pause");
                            break;
                        }
                    }
                    }

                if (opcion == 9)
                {
                    break;
                }
            }
                
        }
                
        }


               
        }
              
        }

        case 4: // Cuentas por pagar
        {
            cout << "Las cuentas montos a pagar de las habitaciones son de: " << endl;
            cout << endl;
            cout << hab1 << " " << nombre1 << " " << apellido1 << " L" << cuenta1 << endl;
            cout << hab2 << " " << nombre2 << " " << apellido2 << " L" << cuenta2 << endl;
            cout << hab3 << " " << nombre3 << " " << apellido3 << " L" << cuenta3 << endl;
            cout << hab4 << " " << nombre4 << " " << apellido4 << " L" << cuenta4 << endl;
            cout << hab5 << " " << nombre5 << " " << apellido5 << " L" << cuenta5 << endl;
            cout << endl;
            system("pause");
            break;
        }   

        case 5: // Check out
        {
            system("cls"); 
            
            cout<< "Estas son las habitaciones, porfavor selecciona una para hacer check out:" << endl;
            cout<< endl;
            cout<< endl;
            cout<< hab1 << tipo1 << stat1 << endl;
            cout<< hab2 << tipo2 << stat2 << endl;
            cout<< hab3 << tipo3 << stat3 << endl;
            cout<< hab4 << tipo4 << stat4 << endl;
            cout<< hab5 << tipo5 << stat5 << endl;
            cout<< endl;
            cout<< "O presiona 9 para volver al menu anterior" << endl;
            cin>> seleccion;
            cout<< endl;

            if (seleccion == 9)
            {
                break;
            }

            switch (seleccion)
            {
            case 1: // Habitacion 1
            {
                if (stat1 == "Disponible")
                {
                    cout << "Error, la habitacion esta no esta ocupada" << endl;
                    system("pause");
                    break;
                }
                
                else if (stat1 == "Ocupada")
                {
                    cout << "Esta seguro que desea liberar la habitacion A001?" << endl;
                    cin>> resp;
                    if (resp == 'y')
                    {
                        cout<< "El total a pagar del cliente es de L" << cuenta1 << endl;
                        stat1 = "Disponible";
                        system("pause");
                        system("cls");
                        cout<< "La habitacion se libero de manera correcta" << endl;
                        cuenta1 = 0;
                        system("pause");
                        break;
                    }
                    else if (resp == 'n')
                    {
                        cout<< "Se ha cancelado la salida del cliente" << endl;
                        system("pause");
                        break;
                    }

                    system("pause");
                    break;
                }
                 
            }

            case 2: // Habitacion 2
            {
                if (stat2 == "Disponible")
                {
                    cout << "Error, la habitacion esta no esta ocupada" << endl;
                    system("pause");
                    break;
                }
                
                else if (stat2 == "Ocupada")
                {
                    cout << "Esta seguro que desea liberar la habitacion A002?" << endl;
                    cin>> resp;
                    if (resp == 'y')
                    {
                        cout<< "El total a pagar del cliente es de L" << cuenta2 << endl;
                        stat2 = "Disponible";
                        system("pause");
                        system("cls");
                        cout<< "La habitacion se libero de manera correcta" << endl;
                        cuenta2 = 0;
                        system("pause");
                        break;
                    }
                    else if (resp == 'n')
                    {
                        cout<< "Se ha cancelado la salida del cliente" << endl;
                        system("pause");
                        break;
                    }

                    system("pause");
                    break;
                }
                 
            }

            case 3: // Habitacion 3
            {
               if (stat3 == "Disponible")
                {
                    cout << "Error, la habitacion esta no esta ocupada" << endl;
                    system("pause");
                    break;
                }
                
                else if (stat3 == "Ocupada")
                {
                    cout << "Esta seguro que desea liberar la habitacion A003?" << endl;
                    cin>> resp;
                    if (resp == 'y')
                    {
                        cout<< "El total a pagar del cliente es de L" << cuenta3 << endl;
                        stat3 = "Disponible";
                        system("pause");
                        system("cls");
                        cout<< "La habitacion se libero de manera correcta" << endl;
                        cuenta3 = 0;
                        system("pause");
                        break;
                    }
                    else if (resp == 'n')
                    {
                        cout<< "Se ha cancelado la salida del cliente" << endl;
                        system("pause");
                        break;
                    }

                    system("pause");
                    break;
                }
                 
            }
            
            case 4: // Habitacion 4
            {
                if (stat4 == "Disponible")
                {
                    cout << "Error, la habitacion esta no esta ocupada" << endl;
                    system("pause");
                    break;
                }
                
                else if (stat4 == "Ocupada")
                {
                    cout << "Esta seguro que desea liberar la habitacion A004?" << endl;
                    cin>> resp;
                    if (resp == 'y')
                    {
                        cout<< "El total a pagar del cliente es de L" << cuenta4 << endl;
                        stat4 = "Disponible";
                        system("pause");
                        system("cls");
                        cout<< "La habitacion se libero de manera correcta" << endl;
                        cuenta4 = 0;
                        system("pause");
                        break;
                    }
                    else if (resp == 'n')
                    {
                        cout<< "Se ha cancelado la salida del cliente" << endl;
                        system("pause");
                        break;
                    }

                    system("pause");
                    break;
                }
                 
            }

            case 5: // Habitacion 5
            {
                if (stat5 == "Disponible")
                {
                    cout << "Error, la habitacion esta no esta ocupada" << endl;
                    system("pause");
                    break;
                }
                
                else if (stat5 == "Ocupada")
                {
                    cout << "Esta seguro que desea liberar la habitacion A005?" << endl;
                    cin>> resp;
                    if (resp == 'y')
                    {
                        cout<< "El total a pagar del cliente es de L" << cuenta5 << endl;
                        stat5 = "Disponible";
                        system("pause");
                        system("cls");
                        cout<< "La habitacion se libero de manera correcta" << endl;
                        cuenta5 = 0;
                        system("pause");
                        break;
                    }
                    else if (resp == 'n')
                    {
                        cout<< "Se ha cancelado la salida del cliente" << endl;
                        system("pause");
                        break;
                    }

                    system("pause");
                    break;
                }
                 
            }

            if (seleccion == 0)
            {
                break;
            }
            }


        }

        }

     if (opcion == 0)
        {
            break;
        }
    }
}
    
    system("cls");
    cout<< endl;
    cout<< "Saliste del sistema" << endl;
    return 0;
}
