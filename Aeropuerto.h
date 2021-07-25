//
// Created by USUARIO on 24/7/2021.
//

#ifndef PROYECTOFINAL_PS_AEROPUERTO_H
#define PROYECTOFINAL_PS_AEROPUERTO_H

#include "Avion.h"
#include <string>
using namespace std;


class Aeropuerto {
public:
    Aeropuerto();
    Aeropuerto(string n);
    Avion flota [10];
    string nombre;
    void verTodos();
    void verNombre();
    void addAvion(Avion a);
};


#endif //PROYECTOFINAL_PS_AEROPUERTO_H
