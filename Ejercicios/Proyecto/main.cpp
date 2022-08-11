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
    int ent1 = 130;
    int ent2 = 100;
    int ent3 = 80;
    int ent4 = 150;
    int ent5 = 120;
    int ent6 = 60;
    int plat1 = 320;
    int plat2 = 280;
    int plat3 = 300;
    int plat4 = 350;
    int plat5 = 250;
    int plat6 = 230;
    int pos1 = 30;
    int pos2 = 30;
    int pos3 = 30;
    int pos4 = 30;
    int pos5 = 30;
    int pos6 = 30;
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


    while (opcion != 8)
    {
        seleccion = 0;
        system("cls");
        cout<< "Bienvenido al sistema de reservas del hotel" << endl;
        cout<< "-------------------------------------------" << endl;
        cout<< "Seleccione una opcion: " << endl;
        cout<< "1. Check in" << endl;
        cout<< "2. Ver habitaciones disponibles" << endl;
        cout<< "3. Restaurante" << endl;
        cout<< "4. Cuentas por pagar" << endl;
        cout<< "5. Check out" << endl;
        cout<< "6. Aseo de habitaciones" << endl;
        cout<< "7. Cambio de precios del sistema" << endl;
        cout<< "8. Salir del sistema" << endl;
        cin>> opcion;


    switch (opcion)
    {
        while (seleccion != 9)
        {
            case 1: // Registro en habitaciones
            {
            while (seleccion != 9)
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
                    cout<< "Esta seguro de registrar al cliente " << nombre1 << " " << apellido1 << " en la habitacion " << hab1 << "? Presione SI = y o NO = n" << endl;
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

                seleccion = 0;    
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
                    cout<< "Esta seguro de registrar al cliente " << nombre2 << " " << apellido2 << " en la habitacion " << hab2 << "? Presione SI = y o NO = n" << endl;
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
                    cout<< "Esta seguro de registrar al cliente " << nombre3 << " " << apellido3 << " en la habitacion " << hab3 << "? Presione SI = y o NO = n" << endl;
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
                    cout<< "Esta seguro de registrar al cliente " << nombre4 << " " << apellido4 << " en la habitacion " << hab4 << "? Presione SI = y o NO = n" << endl;
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
                    cout<< "Esta seguro de registrar al cliente " << nombre5 << " " << apellido5 << " en la habitacion " << hab5 << "? Presione SI = y o NO = n" << endl;
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
            break;
            }
          }
          
        }
    
            case 2: // Vista de habitaciones disponibles
            {
            while (seleccion !=9)
            {
            system("cls"); 
            cout<< "Este es el estado actual de las habitaciones del hotel" << endl;
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
            }

        }
    
            case 3: // Restaurante
            {      
                while (seleccion !=9)
                {
                    system("cls"); 
                    seleccion = 0;
                    cout << "************" << endl;
                    cout << "----Menu----" << endl;
                    cout << "************" << endl;
        
                    cout << "1. Bebidas" << endl;
                    cout << "2. Entradas / botanas" << endl;
                    cout << "3. Platillos fuertes" << endl;
                    cout << "4. Postres" << endl;
                    cout << "9. Salir." << endl;
                    cout << "Ingrese una opcion: ";
                    cin >> seleccion;
        
                    switch (seleccion)
                    {
                        case 1: // Bebidas
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
                            }
                        }
                        
                        case 2: // Entradas / Botanas
                        {
                            cout << "---------------------------" << endl;
                            cout << "Entraste al menu de Entradas / botanas" << endl;
                            cout << "---------------------------" << endl;
                            cout << endl;
                            cout << "1. Fundido de queso" <<"-------" << "L" << beb1 <<endl;
                            cout << "2. Nachos" <<"-----------------" << "L" << beb2 <<endl;
                            cout << "3. Palomitas" <<"--------------" << "L" << beb3 <<endl;
                            cout << "4. Ensalada" <<"---------------" << "L" << beb4 <<endl;
                            cout << "5. Dedos de queso" <<"---------" << "L" << beb5 <<endl;
                            cout << "6. Pringles" <<"---------------" << "L" << beb6 <<endl;
                            cout << "9. Salir" <<endl;
                            cout << endl;
            
                            cout << "Seleccione la entrada que desea agregar: " << endl;
                            cin>> opcion;

                            switch (opcion)
                            {
                                case 1: // Fundido de queso
                                {
                                    cout << "A que habitacion desea cargar el Fundido de queso? " << endl;
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
                                            cuenta1 = cuenta1 + ent1;
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
                                            cuenta2 = cuenta2 + ent1;
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
                                            cuenta3 = cuenta3 + ent1;
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
                                            cuenta4 = cuenta4 + ent1;
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
                                            cuenta5 = cuenta5 + ent1;
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
                                case 2: // Nachos
                                {
                                    cout << "A que habitacion desea cargar los Nachos? " <<endl;
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
                                            cuenta1 = cuenta1 + ent2;
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
                                            cuenta2 = cuenta2 + ent2;
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
                                            cuenta3 = cuenta3 + ent2;
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
                                            cuenta4 = cuenta4 + ent2;
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
                                            cuenta5 = cuenta5 + ent2;
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
                                case 3 : // Palomitas
                                {
                                    cout << "A que habitacion desea cargar las Palomitas?" <<endl;
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
                                            cuenta1 = cuenta1 + ent3;
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
                                            cuenta2 = cuenta2 + ent3;
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
                                            cuenta3 = cuenta3 + ent3;
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
                                            cuenta4 = cuenta4 + ent3;
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
                                            cuenta5 = cuenta5 + ent3;
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
                                case 4 : // Ensalada
                                {
                                    cout << "A que habitacion desea cargar la Ensalada? " <<endl;
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
                                            cuenta1 = cuenta1 + ent4;
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
                                            cuenta2 = cuenta2 + ent4;
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
                                            cuenta3 = cuenta3 + ent4;
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
                                            cuenta4 = cuenta4 + ent4;
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
                                            cuenta5 = cuenta5 + ent4;
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
                                case 5 : // Dedos de queso
                                {
                                    cout << "A que habitacion desea cargar los Dedos de queso?" <<endl;
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
                                            cuenta1 = cuenta1 + ent5;
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
                                            cuenta2 = cuenta2 + ent5;
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
                                            cuenta3 = cuenta3 + ent5;
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
                                            cuenta4 = cuenta4 + ent5;
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
                                            cuenta5 = cuenta5 + ent5;
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
                                case 6 : // Pringles
                                {
                                    cout << "A que habitacion desea cargar los Pringles? " <<endl;
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
                                            cuenta1 = cuenta1 + ent6;
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
                                            cuenta2 = cuenta2 + ent6;
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
                                            cuenta3 = cuenta3 + ent6;
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
                                            cuenta4 = cuenta4 + ent6;
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
                                            cuenta5 = cuenta5 + ent6;
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
                            }

                        }
                
                        case 3: // Platillos fuertes
                        {
                            cout << "---------------------------" << endl;
                            cout << "Entraste al menu de Platillos fuertes" << endl;
                            cout << "---------------------------" << endl;
                            cout << endl;
                            cout << "1. Churrasco" <<"------------------------" << "L" << beb1 <<endl;
                            cout << "2. Hamburguesa Cheese Bakon" <<"---------" << "L" << beb2 <<endl;
                            cout << "3. Pescado frito" <<"--------------------" << "L" << beb3 <<endl;
                            cout << "4. Camarones al gusto" <<"---------------" << "L" << beb4 <<endl;
                            cout << "5. Filete de pollo al gusto" <<"---------" << "L" << beb5 <<endl;
                            cout << "6. Chuleta de cerdo a la plancha" <<"----" << "L" << beb6 <<endl;
                            cout << "9. Salir" <<endl;
                            cout << endl;
            
                            cout << "Seleccione el platillo que desea agregar: " << endl;
                            cin>> opcion;

                            switch (opcion)
                            {
                                case 1: // Churrasco
                                {
                                    cout << "A que habitacion desea cargar el Churrasco? " << endl;
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
                                            cuenta1 = cuenta1 + plat1;
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
                                            cuenta2 = cuenta2 + plat1;
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
                                            cuenta3 = cuenta3 + plat1;
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
                                            cuenta4 = cuenta4 + plat1;
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
                                            cuenta5 = cuenta5 + plat1;
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
                                case 2: // Hamburguesa Cheese Bakon
                                {
                                    cout << "A que habitacion desea cargar la Hamburguesa Cheese Bakon? " <<endl;
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
                                            cuenta1 = cuenta1 + plat2;
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
                                            cuenta2 = cuenta2 + plat2;
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
                                            cuenta3 = cuenta3 + plat2;
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
                                            cuenta4 = cuenta4 + plat2;
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
                                            cuenta5 = cuenta5 + plat2;
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
                                case 3 : // Pescado frito
                                {
                                    cout << "A que habitacion desea cargar el Pescado frito?" <<endl;
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
                                            cuenta1 = cuenta1 + plat3;
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
                                            cuenta2 = cuenta2 + plat3;
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
                                            cuenta3 = cuenta3 + plat3;
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
                                            cuenta4 = cuenta4 + plat3;
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
                                            cuenta5 = cuenta5 + plat3;
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
                                case 4 : // Camarones al gusto
                                {
                                    cout << "A que habitacion desea cargar los Camarones al gusto? " <<endl;
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
                                            cuenta1 = cuenta1 + plat4;
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
                                            cuenta2 = cuenta2 + plat4;
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
                                            cuenta3 = cuenta3 + plat4;
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
                                            cuenta4 = cuenta4 + plat4;
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
                                            cuenta5 = cuenta5 + plat4;
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
                                case 5 : // Filete de pollo al gusto
                                {
                                    cout << "A que habitacion desea cargar el Filete de pollo al gusto?" <<endl;
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
                                            cuenta1 = cuenta1 + plat5;
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
                                            cuenta2 = cuenta2 + plat5;
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
                                            cuenta3 = cuenta3 + plat5;
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
                                            cuenta4 = cuenta4 + plat5;
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
                                            cuenta5 = cuenta5 + plat5;
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
                                case 6 : // Chuleta de cerdo a la plancha
                                {
                                    cout << "A que habitacion desea cargar la Chuleta de cerdo a la plancha? " <<endl;
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
                                            cuenta1 = cuenta1 + plat6;
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
                                            cuenta2 = cuenta2 + plat6;
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
                                            cuenta3 = cuenta3 + plat6;
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
                                            cuenta4 = cuenta4 + plat6;
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
                                            cuenta5 = cuenta5 + plat6;
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
                            }
                        }
                       
                        case 4: // Postres
                        {
                            cout << "---------------------------" << endl;
                            cout << "Entraste al menu de Postres" << endl;
                            cout << "---------------------------" << endl;
                            cout << endl;
                            cout << "1. Pie de manzana" <<"-------------" << "L" << beb1 <<endl;
                            cout << "2. Cheesecake" <<"-----------------" << "L" << beb2 <<endl;
                            cout << "3. Flan de chocolate" <<"----------" << "L" << beb3 <<endl;
                            cout << "4. Torta de zanahoria" <<"---------" << "L" << beb4 <<endl;
                            cout << "5. Galletas de chocolate" <<"------" << "L" << beb5 <<endl;
                            cout << "6. Helado al gusto" <<"------------" << "L" << beb6 <<endl;
                            cout << "9. Salir" <<endl;
                            cout << endl;
            
                            cout << "Seleccione el postre que desea agregar: " << endl;
                            cin>> opcion;

                            switch (opcion)
                            {
                                case 1: // Pie de manzana
                                {
                                    cout << "A que habitacion desea cargar el Pie de manzana? " << endl;
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
                                            cuenta1 = cuenta1 + pos1;
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
                                            cuenta2 = cuenta2 + pos1;
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
                                            cuenta3 = cuenta3 + pos1;
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
                                            cuenta4 = cuenta4 + pos1;
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
                                            cuenta5 = cuenta5 + pos1;
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
                                case 2: // Nachos
                                {
                                    cout << "A que habitacion desea cargar el Cheesecake? " <<endl;
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
                                            cuenta1 = cuenta1 + pos2;
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
                                            cuenta2 = cuenta2 + pos2;
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
                                            cuenta3 = cuenta3 + pos2;
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
                                            cuenta4 = cuenta4 + pos2;
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
                                            cuenta5 = cuenta5 + pos2;
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
                                case 3 : // Flan de chocolate
                                {
                                    cout << "A que habitacion desea cargar el Flan de chocolate?" <<endl;
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
                                            cuenta1 = cuenta1 + pos3;
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
                                            cuenta2 = cuenta2 + pos3;
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
                                            cuenta3 = cuenta3 + pos3;
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
                                            cuenta4 = cuenta4 + pos3;
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
                                            cuenta5 = cuenta5 + pos3;
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
                                case 4 : // Torta de zanahoria
                                {
                                    cout << "A que habitacion desea cargar la Torta de zanahoria? " <<endl;
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
                                            cuenta1 = cuenta1 + pos4;
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
                                            cuenta2 = cuenta2 + pos4;
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
                                            cuenta3 = cuenta3 + pos4;
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
                                            cuenta4 = cuenta4 + pos4;
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
                                            cuenta5 = cuenta5 + pos4;
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
                                case 5 : // Galletas de chocolate
                                {
                                    cout << "A que habitacion desea cargar las Galletas de chocolate?" <<endl;
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
                                            cuenta1 = cuenta1 + pos5;
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
                                            cuenta2 = cuenta2 + pos5;
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
                                            cuenta3 = cuenta3 + pos5;
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
                                            cuenta4 = cuenta4 + pos5;
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
                                            cuenta5 = cuenta5 + pos5;
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
                                case 6 : // Helado al gusto
                                {
                                    cout << "A que habitacion desea cargar el Helado al gusto? " <<endl;
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
                                            cuenta1 = cuenta1 + pos6;
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
                                            cuenta2 = cuenta2 + pos6;
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
                                            cuenta3 = cuenta3 + pos6;
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
                                            cuenta4 = cuenta4 + pos6;
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
                                            cuenta5 = cuenta5 + pos6;
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
                            }

                        } 
                    }        
                }            
            }
    
            case 4: // Cuentas por pagar
            {
             while (seleccion !=9)
            {
            system("cls");
            seleccion = 0;
            cout << "Las cuentas montos a pagar de las habitaciones son de: " << endl;
            cout << endl;
            cout << hab1 << " ------ " << nombre1 << " ------ " << apellido1 << " L" << cuenta1 << endl;
            cout << hab2 << " ------ " << nombre2 << " ------ " << apellido2 << " L" << cuenta2 << endl;
            cout << hab3 << " ------ " << nombre3 << " ------ " << apellido3 << " L" << cuenta3 << endl;
            cout << hab4 << " ------ " << nombre4 << " ------ " << apellido4 << " L" << cuenta4 << endl;
            cout << hab5 << " ------ " << nombre5 << " ------ " << apellido5 << " L" << cuenta5 << endl;
            cout << endl;
            cout<< "O presiona 9 para volver al menu anterior" << endl;
            cin>> seleccion;
            cout<< endl;
            }
        }   
    
            case 5: // Check out
            {
            while (seleccion !=9)
            {
            system("cls"); 
            cout<< "Estas son las habitaciones, porfavor selecciona una para hacer check out:" << endl;
            cout<< endl;
            cout<< hab1 << " " << tipo1 << " " << stat1 << endl;
            cout<< hab2 << " " << tipo2 << " " << stat2 << endl;
            cout<< hab3 << " " << tipo3 << " " << stat3 << endl;
            cout<< hab4 << " " << tipo4 << " " << stat4 << endl;
            cout<< hab5 << " " << tipo5 << " " << stat5 << endl;
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
                    cout << "Esta seguro que desea liberar la habitacion A001? Presione SI = y o NO = n" << endl;
                    cin>> resp;
                    if (resp == 'y')
                    {
                        cout<< "El total a pagar del cliente es de L" << cuenta1 << endl;
                        stat1 = "Disponible";
                        lim1 = "Sucia";
                        system("pause");
                        system("cls");
                        cout<< "La habitacion se libero de manera correcta" << endl;
                        cuenta1 = 0;
                        nombre1 = "";
                        apellido1 = "";
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
                    cout << "Esta seguro que desea liberar la habitacion A002? Presione SI = y o NO = n" << endl;
                    cin>> resp;
                    if (resp == 'y')
                    {
                        cout<< "El total a pagar del cliente es de L" << cuenta2 << endl;
                        stat2 = "Disponible";
                        lim2 = "Sucia";
                        system("pause");
                        system("cls");
                        cout<< "La habitacion se libero de manera correcta" << endl;
                        cuenta2 = 0;
                        nombre2 = "";
                        apellido2 = "";
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
                    cout << "Esta seguro que desea liberar la habitacion A003? Presione SI = y o NO = n" << endl;
                    cin>> resp;
                    if (resp == 'y')
                    {
                        cout<< "El total a pagar del cliente es de L" << cuenta3 << endl;
                        stat3 = "Disponible";
                        lim3 = "Sucia";
                        system("pause");
                        system("cls");
                        cout<< "La habitacion se libero de manera correcta" << endl;
                        cuenta3 = 0;
                        nombre3 = "";
                        apellido3 = "";
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
                    cout << "Esta seguro que desea liberar la habitacion A004? Presione SI = y o NO = n" << endl;
                    cin>> resp;
                    if (resp == 'y')
                    {
                        cout<< "El total a pagar del cliente es de L" << cuenta4 << endl;
                        stat4 = "Disponible";
                        lim4 = "Sucia";
                        system("pause");
                        system("cls");
                        cout<< "La habitacion se libero de manera correcta" << endl;
                        cuenta4 = 0;
                        nombre4 = "";
                        apellido4 = "";
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
                    cout << "Esta seguro que desea liberar la habitacion A005? Presione SI = y o NO = n" << endl;
                    cin>> resp;
                    if (resp == 'y')
                    {
                        cout<< "El total a pagar del cliente es de L" << cuenta5 << endl;
                        stat5 = "Disponible";
                        lim5 = "Sucia";
                        system("pause");
                        system("cls");
                        cout<< "La habitacion se libero de manera correcta" << endl;
                        cuenta5 = 0;
                        nombre5 = "";
                        apellido5 = "";
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

            }
          }
        }
    
            case 6: // Aseo de habitaciones
            {
            while (seleccion !=9)
            {
            system("cls"); 
            cout<< "Estas son las habitaciones, porfavor selecciona la que ya esta limpia y lista para su uso:" << endl;
            cout<< endl;
            cout<< hab1 << " ------ " << lim1 << " ------ " << stat1 << endl;
            cout<< hab2 << " ------ " << lim2 << " ------ " << stat2 << endl;
            cout<< hab3 << " ------ " << lim3 << " ------ " << stat3 << endl;
            cout<< hab4 << " ------ " << lim4 << " ------ " << stat4 << endl;
            cout<< hab5 << " ------ " << lim5 << " ------ " << stat5 << endl;
            cout<< endl;
            cout<< "O presiona 9 para volver al menu anterior" << endl;
            cin>> seleccion;
            cout<< endl;

            switch (seleccion)
            {
            case 1: // Habitacion 1
            {
                if (lim1 == "Limpia")
                {
                    cout << "Error, la habitacion esta limpia" << endl;
                    system("pause");
                    break;
                }
                
                else if (lim1 == "Sucia")
                {
                    cout << "Esta seguro que desea marcar la habitacion A001 como limpia? Presione SI = y o NO = n" << endl;
                    cin>> resp;
                    if (resp == 'y')
                    {
                        cout<< "Se marco la habitacion como limpia" << endl;
                        lim1 = "Limpia";
                        system("pause");
                        break;
                    }
                    else if (resp == 'n')
                    {
                        cout<< "Se ha cancelado la limpieza" << endl;
                        system("pause");
                        break;
                    }

                    system("pause");
                    break;
                }
                 
            }

            case 2: // Habitacion 2
            {
                if (lim1 == "Limpia")
                {
                    cout << "Error, la habitacion esta limpia" << endl;
                    system("pause");
                    break;
                }
                
                else if (lim2 == "Sucia")
                {
                    cout << "Esta seguro que desea marcar la habitacion A002 como limpia? Presione SI = y o NO = n" << endl;
                    cin>> resp;
                    if (resp == 'y')
                    {
                        cout<< "Se marco la habitacion como limpia" << endl;
                        lim2 = "Limpia";
                        system("pause");
                        break;
                    }
                    else if (resp == 'n')
                    {
                        cout<< "Se ha cancelado la limpieza" << endl;
                        system("pause");
                        break;
                    }

                    system("pause");
                    break;
                }
                 
            }

            case 3: // Habitacion 3
            {
               if (lim3 == "Limpia")
                {
                    cout << "Error, la habitacion esta limpia" << endl;
                    system("pause");
                    break;
                }
                
                else if (lim3 == "Sucia")
                {
                    cout << "Esta seguro que desea marcar la habitacion A003 como limpia? Presione SI = y o NO = n" << endl;
                    cin>> resp;
                    if (resp == 'y')
                    {
                        cout<< "Se marco la habitacion como limpia" << endl;
                        lim3 = "Limpia";
                        system("pause");
                        break;
                    }
                    else if (resp == 'n')
                    {
                        cout<< "Se ha cancelado la limpieza" << endl;
                        system("pause");
                        break;
                    }

                    system("pause");
                    break;
                }
                 
            }

            case 4: // Habitacion 4
            {
                if (lim4 == "Limpia")
                {
                    cout << "Error, la habitacion esta limpia" << endl;
                    system("pause");
                    break;
                }
                
                else if (lim4 == "Sucia")
                {
                    cout << "Esta seguro que desea marcar la habitacion A004 como limpia? Presione SI = y o NO = n" << endl;
                    cin>> resp;
                    if (resp == 'y')
                    {
                        cout<< "Se marco la habitacion como limpia" << endl;
                        lim4 = "Limpia";
                        system("pause");
                        break;
                    }
                    else if (resp == 'n')
                    {
                        cout<< "Se ha cancelado la limpieza" << endl;
                        system("pause");
                        break;
                    }

                    system("pause");
                    break;
                }
            }

            case 5: // Habitacion 5
            {
                if (lim5 == "Limpia")
                {
                    cout << "Error, la habitacion esta limpia" << endl;
                    system("pause");
                    break;
                }
                
                else if (lim5 == "Sucia")
                {
                    cout << "Esta seguro que desea marcar la habitacion A005 como limpia? Presione SI = y o NO = n" << endl;
                    cin>> resp;
                    if (resp == 'y')
                    {
                        cout<< "Se marco la habitacion como limpia" << endl;
                        lim5 = "Limpia";
                        system("pause");
                        break;
                    }
                    else if (resp == 'n')
                    {
                        cout<< "Se ha cancelado la limpieza" << endl;
                        system("pause");
                        break;
                    }

                    system("pause");
                    break;
                }
                 
            }
            }
        }  
        }
            
            case 7:
            {

            }
        }
    }
}
    
    system("cls");
    cout<< endl;
    cout<< "Saliste del sistema" << endl;
    return 0;
}
