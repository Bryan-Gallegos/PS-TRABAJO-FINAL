#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int menuPrincipal();
void inicioSesion();
void registro();
void mostrarMenu();
void administrador();
void adminMenu();

int main(){
    int valor;
    valor = menuPrincipal();
    switch (valor)
    {
        case 1:  //inicio de sesion
            inicioSesion();
            break;
        case 2:
            administrador();
            break;
        case 3: //registro de usuario
            registro();
            break;
        case 4:  //salir del programa
            break;
        default: //opcion no valida
            cout<<"\t\t Opcion desconocida"<<endl;
            break;
    }

    return 0;
}

int menuPrincipal(){
    int op;
    cout<<"============ Reservaciones de Pasajes ============"<<endl;
    cout<<" \t\t1. Iniciar Sesion  "<<endl;
    cout<<" \t\t2. Iniciar como Administrador"<<endl;
    cout<<" \t\t3. Registrarse "<<endl;
    cout<<" \t\t4. Salir "<<endl;
    cout<<"=================================================="<<endl;
    cout<<" Ingrese una opcion: ";


    cin>>op;
    return op;
}

void inicioSesion(){

    cout<<"============ Inicio de Sesión ============"<<endl;
    cout<<"\t\t Usuario: "<<endl;
    cin >> usuario;
    cout<<"\n \t\t Contraseña: "<<endl;
    cin >> contrasenia;
    /*
        Código de comprobación del usuario
     */
    cout<<"============ Inicio Exitoso! ============"<<endl;
    mostrarMenu();
}

void administrador(){
    cout<<"============ Opciones============"<<endl;
    cout<<"\t\t Correo. "<<endl;
    cin>>correo,
    cout<<"\t\t Contraseña: "<<endl;
    cin>>contrasenia;

    adminMenu();
}

void registro(){

    cout<<"============ Registro ============"<<endl;
    cout<<"\t\t Nombre: <<endl;"<<endl;
    cin >> nombre;
    cout<<"\t\t Apellido: "<<endl;
    cin >> apellido;
    cout<<"\t\t Usuario: "<<endl;
    cin >> usuario;
    cout<<"\t\t Contraseña"<<endl;
    cin >> contrasenia;

    /*
        Código de registro de usuario.
    */
    cout<<"============ Registro Exitoso ============"<<endl;
}
void mostrarMenu(){
    int opc;
    cout<<"============ Opciones ============"<<endl;
    cout<<"\t\t 1. Nueva Reservacion: "<<endl;
    cout<<"\t\t 2. Mostrar Reservacion: "<<endl;
    cout<<"\t\t 3. Eliminar Reservacion: "<<endl;
    cout<<"\t\t 4. Salir "<<endl;
    cout<<"=================================================="<<endl;
    cout<<" Ingrese una opcion: ";
    cin>>opc;
    string nom;
    string dia;
    switch (opc){
        case 1: //Añadir nueva reservación
            cout<<endl;
            cout<<"\tIngrese nombre de lugar destino:"; getline(cin, nom);
            /*
                codigo con deestino
            */
            cout<<"\tIngrese dia de salida:"; cin>>dia;
            break;
        case 2: //Mostrar todas las reservaciones
            cout<<endl;
            /*
                mostrar todos las reservaciones que hay
            */
            cout<<endl;
            cout<<"Presione cualquier tecla para volver al menu.."<< endl;
            getch();
            break;
        case 3: //eliminar reservacion
            cout<<"¿Cual numero de reservacion desea eliminar?";
            cin>>nom;
            /*
                codigo de eliminacion de reservacion
            */
            cout<<"Presione cualquier tecla para volver al menu.."<< endl;
            getch();
            break;
        case 4:  //salir del programa
            cout<<"============ Fin del programa ============"<<endl;
            break;
        default:  //opcion no valida
            cout << "Opción desconocida!" << endl;
            break;
    }
}
void adminMenu(){
    int opci;
    cout<<"============ Opciones ============"<<endl;
    cout<<"\t\t 1. Crear aerolinea"<<endl;
    cout<<"\t\t 2. Eliminar aerolinea"<<endl;
    cout<<"\t\t 4. Generar Reporte "<<endl;
    cout<<"\t\t 5. Salir"<<endl;
    cout<<"=================================================="<<endl;
    cout<<" Ingrese una opcion: ";
    cin>>opci;

    switch (opci) {
        case 1:
            cout<<endl;
            cout<<"Ingrese nombre de aerolinea..\t";cin>>nombre;
            cout<<endl;
            cout<<"Ingrese destino de la aerolinea..\t";cin>>destino;
            cout<<endl;
            cout<<"Presione cualquier tecla para volver al menu.."<< endl;
            getch();
            break;
        case 2:
            cout<<endl;
            /*
                Mostrar todas las aerolineas
             */
            cout<<endl;
            cout<<"Ingresar nombre de aerolinea a eliminar..\t";cin>>aero;
            cout<<endl;
            cout<<"Presione cualquier tecla para volver al menu.."<< endl;
            getch();
            break;
        case 3:
            cout<<endl;
            cout<<"============ Generar Reporte ============";
            /*
             codigo de generacion de reporte
             */
            cout<<"Presione cualquier tecla para volver al menu.."<< endl;
            getch();
            break;
        case 4:
            cout<<"============ Fin del programa ============"<<endl;
            break;
        default:  //opcion no valida
            cout << "Opción desconocida!" << endl;
            break;
    }
}
