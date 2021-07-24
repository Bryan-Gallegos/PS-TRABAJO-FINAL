#include <iostream>
#include <stdio.h>
using namespace std;

int menuPrincipal();
void respuesta();
void inicioSesion();
void registro();
void mostrarMenu();

int main(){
    int valor;
    valor = menuPrincipal();
    switch (valor)
    {
        case 1:  //inicio de sesion
            inicioSesion();
            break;
        case 2: //registro de usuario
            registro();
            break;
        case 3:  //salir del programa
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
    cout<<" \t\t2. Registrarse "<<endl;
    cout<<" \t\t3. Salir "<<endl;
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

void registro(){
    
    cout<<"============ Registro ============"<<endl;
    cout<<"\t\t Nombre: <<endl;"<<endl;
    cin >> nombre;
    cout<<"\t\t Apellido: "<<endl;
    cin >> apellido;
    cout<<"\t\t Usuario: "<<endl;
    cin >> usuario;
    cout<<"\t\t Contraseña"<<endl;
    cin >> contrasenia

    /*
        Código de registro de usuario.
    */
   cout<<"============ Registro Exitoso ============"<<endl;
}
void mostrarMenu(){
    int opc;
    cout<<"============ Opciones ============"<<endl;
    cout<<"\t\t 1. Nueva Reservacion: "<<endl;
    cout<<"\t\t 2. Editar Reservacion: "<<endl;
    cout<<"\t\t 3. Eliminar Reservacion: "<<endl;
    cout<<"\t\t 4. Salir "<<endl;
    cout<<"=================================================="<<endl;
    cout<<" Ingrese una opcion: ";
    string nom;
    string dia;
    cin.ignore();
    switch (opc){
        case 1: //Añadir nueva reservación
            cout<<endl;
            cout<<"\tIngrese nombre de lugar destino:"; getline(cin, nom);
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

