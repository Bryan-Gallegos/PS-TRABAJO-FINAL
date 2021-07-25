#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <conio.h> // getch
#include <vector>
#include "Usuario.h"
#include "Usuario.cpp"
//nuevo
#define ENTER 13
#define BACKSPACE 8
#define INTENTOS 3
using namespace std;
using namespace std;

int menuPrincipal();
void inicioSesion();
void registro();
void mostrarMenu();
void administrador();
void adminMenu();

int main()
{
    int valor;
    valor = menuPrincipal();
    switch (valor)
    {
        case 1: //inicio de sesion
            inicioSesion();
            break;
        case 2:
            administrador();
            break;
        case 3: //registro de usuario
            registro();
            break;
        case 4: //salir del programa
            break;
        default: //opcion no valida
            cout << "\t\t Opcion desconocida" << endl;
            break;
    }

    return 0;
}

int menuPrincipal()
{
    int op;
    cout << "============ Reservaciones de Pasajes ============" << endl;
    cout << " \t\t1. Iniciar Sesion  " << endl;
    cout << " \t\t2. Iniciar como Administrador" << endl;
    cout << " \t\t3. Registrarse " << endl;
    cout << " \t\t4. Salir " << endl;
    cout << "==================================================" << endl;
    cout << " Ingrese una opcion: ";

    cin >> op;
    return op;
}


void inicioSesion()
{
    Usuario usuarios[10];
    int i=0;
    // Se añaden usuarios al vector
    usuarios[0] = new Usuario("juan","perez","relarte"); ++i;
    usuarios[1] = new Usuario("raul","gonzales","raul123");++i;

    string usuario, password;

    int contador = 0;
    bool ingresa = false;

    do
    {
        system("cls");
        cout << "============ Inicio de Sesión ============" << endl;
        cout << "\t\t\tLOGIN DE USUARIO" << endl;
        cout << "\t\t\t----------------" << endl;
        cout << "\n\tUsuario: ";
        getline(cin, usuario);
        cout<<endl;

        char caracter;
        cout << "\tPassword: ";
        caracter = getch();

        password = "";
        while (caracter != ENTER)
        {
            if (caracter != BACKSPACE)
            {
                password.push_back(caracter);
                cout << "*";
            }
            else
            {
                if (password.length() > 0)
                {
                    cout << "\b \b";
                    password = password.substr(0, password.length() - 1);
                }
            }
            caracter = getch();
        }
        for (int i = 0; i < sizeof(usuarios); i++)
        {
            if (usuarios[i].nombre == usuario && usuarios[i].contrasenia == password)
            {
                ingresa = true;
                break;
            }
        }
        if (!ingresa)
        {
            cout << "\n\n\tEl usuario y/o password son incorrectos" << endl;
            cin.get();
            contador++;
        }
    } while (ingresa == false && contador < INTENTOS);
    if (ingresa == false)
    {
        cout << "\n\tUsted no pudo ingresar al sistema. ADIOS" << endl;
    }
    else
    {
        cout << "\n\n\tBienvenido al sistema" << endl;
        mostrarMenu();
    }
}
static Usuario  admins [8];
void administrador()
{
    // Se añaden usuarios al vector

    admins[0]=new Usuario("jimy","revilla","tellez");
    admins[1]=new Usuario("bryan","gallegos","carlos");
    admins[2]=new Usuario("frank","ccapa","usca");
    admins[3]=new Usuario("ayrton","garcia","puma");

    string usuario, password;

    int contador = 0;
    bool ingresa = false;

    do
    {
        system("cls");
        cout << "============ Inicio de Sesión ============" << endl;
        cout << "\t\t\tLOGIN DE USUARIO DE ADMINISTRADOR" << endl;
        cout << "\t\t\t----------------" << endl;
        cout << "\n\tUsuario: ";
        getline(cin, usuario);
        char caracter;
        cout << "\tPassword: ";
        caracter = getch();

        password = "";

        while (caracter != ENTER)
        {

            if (caracter != BACKSPACE)
            {
                password.push_back(caracter);
                cout << "*";
            }
            else
            {
                if (password.length() > 0)
                {
                    cout << "\b \b";
                    password = password.substr(0, password.length() - 1);
                }
            }

            caracter = getch();
        }

        for (int i = 0; i < sizeof(admins); i++)
        {
            if (admins[i].nombre == usuario && admins[i].contrasenia == password)
            {
                ingresa = true;
                break;
            }
        }

        if (!ingresa)
        {
            cout << "\n\n\tEl usuario y/o password son incorrectos" << endl;
            cin.get();
            contador++;
        }

    } while (ingresa == false && contador < INTENTOS);

    if (ingresa == false)
    {
        cout << "\n\tUsted no pudo ingresar al sistema. ADIOS" << endl;
    }
    else
    {
        cout << "\n\n\tBienvenido al sistema" << endl;
        adminMenu();
    }


}

void registro()
{
    string nombre, apellido, usuario, contrasenia;
    int i=4;
    cout << "============ Registro ============" << endl;
    cout << "\t\t Nombre:" << endl;
    cin >> nombre;
    cout <<endl;
    cout << "\t\t Apellido: " << endl;
    cin >> apellido;
    cout <<endl;
    cout << "\t\t Usuario: " << endl;
    cin >> usuario;
    cout <<endl;
    cout << "\t\t Contraseña" << endl;
    cin >> contrasenia;
    cout <<endl;
    admins[i]=new Usuario(nombre,apellido,contrasenia);
    ++i;

    cout << "============ Registro Exitoso ============" << endl;
    inicioSesion();
}
void mostrarMenu()
{
    int opc;
    cout << "============ Opciones ============" << endl;
    cout << "\t\t 1. Nueva Reservacion: " << endl;
    cout << "\t\t 2. Mostrar Reservacion: " << endl;
    cout << "\t\t 3. Eliminar Reservacion: " << endl;
    cout << "\t\t 4. Salir " << endl;
    cout << "==================================================" << endl;
    cout << " Ingrese una opcion: ";
    cin >> opc;
    string nom;
    string dia;
    switch (opc)
    {
        case 1: //Añadir nueva reservación
            cout << endl;
            cout << "\tIngrese nombre de lugar destino:";
            getline(cin, nom);
            /*
                    codigo con deestino
                */
            cout << "\tIngrese dia de salida:";
            cin >> dia;
            break;
        case 2: //Mostrar todas las reservaciones
            cout << endl;
            /*
                    mostrar todos las reservaciones que hay
                */
            cout << endl;
            cout << "Presione cualquier tecla para volver al menu.." << endl;
            getch();
            break;
        case 3: //eliminar reservacion
            cout << "¿Cual numero de reservacion desea eliminar?";
            cin >> nom;
            /*
                    codigo de eliminacion de reservacion
                */
            cout << "Presione cualquier tecla para volver al menu.." << endl;
            getch();
            break;
        case 4: //salir del programa
            cout << "============ Fin del programa ============" << endl;
            break;
        default: //opcion no valida
            cout << "Opción desconocida!" << endl;
            break;
    }
}
void adminMenu()
{
    int opci;
    cout << "============ Opciones ============" << endl;
    cout << "\t\t 1. Crear aerolinea" << endl;
    cout << "\t\t 2. Eliminar aerolinea" << endl;
    cout << "\t\t 4. Generar Reporte " << endl;
    cout << "\t\t 5. Salir" << endl;
    cout << "==================================================" << endl;
    cout << " Ingrese una opcion: ";
    cin >> opci;
    string nombre;
    string aerolinea;
    string destino;
    switch (opci)
    {
        case 1:
            cout << endl;
            cout << "Ingrese nombre de aerolinea..\t";
            cin >> nombre;
            cout << endl;
            cout << "Ingrese destino de la aerolinea..\t";
            cin >> destino;
            cout << endl;
            cout << "Presione cualquier tecla para volver al menu.." << endl;
            getch();
            break;
        case 2:
            cout << endl;
            /*
                    Mostrar todas las aerolineas
                 */
            cout << endl;
            cout << "Ingresar nombre de aerolinea a eliminar..\t";
            cin >> aerolinea;
            cout << endl;
            cout << "Presione cualquier tecla para volver al menu.." << endl;
            getch();
            break;
        case 3:
            cout << endl;
            cout << "============ Generar Reporte ============";
            /*
                 codigo de generacion de reporte
                 */
            cout << "Presione cualquier tecla para volver al menu.." << endl;
            getch();
            break;
        case 4:
            cout << "============ Fin del programa ============" << endl;
            break;
        default: //opcion no valida
            cout << "Opción desconocida!" << endl;
            break;
    }
}
