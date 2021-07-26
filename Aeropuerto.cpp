//
// Created by USUARIO on 24/7/2021.
//

#include "Aeropuerto.h"
#include "Avion.h"

void Aeropuerto::verTodos() {
    /*for(int i=0;i<10;i++){
        cout<<"Avion "<<i<<endl;
        cout<<"Aerolinea: "<<flota[i].aerolinea<<endl;
        cout<<"Fecha de partida: "<<flota[i].fVuelo.dia<<"/"<<flota[i].fVuelo.mes<<"/"<<flota[i].fVuelo.anio<<endl;
        cout<<"Hora de Partida: "<<flota[i].hPartida.hora<<":"<<flota[i].hPartida.minuto<<endl;
        cout<<"Hora de Llegada: "<<flota[i].hLlegada.hora<<":"<<flota[i].hLlegada.minuto<<endl;
        cout<<"Precio por boleto: "<<flota[i].preBol<<endl;
        cout<<"Cantidad de pasajeros: "<<flota[i].cantPas<<endl;
        cout<<"======================================="<<endl;
    }*/
}

Aeropuerto::Aeropuerto() {}

Aeropuerto::Aeropuerto(string n) {
    nombre=n;
}

int Aeropuerto::getCantidad(){
    int cant=0;
    for (int i = 0; i < sizeof (flota); ++i) {
        cant++;
    }
    return cant;
}
void Aeropuerto::verNombre() {
    cout<<nombre<<endl;
}
Avion* Aeropuerto::getFlota(){
    return flota;
}
Avion Aeropuerto::getAvion(int i){
    return flota[i];
}

void Aeropuerto::addAvion(Avion a) {
    int i=0;
    flota[i]=a;
    i++;
}



