//
// Created by USUARIO on 24/7/2021.
//

#ifndef PROYECTOFINAL_PS_BOLETA_H
#define PROYECTOFINAL_PS_BOLETA_H

#include <iostream>
#include "Hora.h"
#include "Fecha.h"
#include "Usuario.h"
#include "Avion.h"

class Boleta {
public:
    Boleta(Usuario u, Avion a, int asiento);
    string nombre;
    string apellido;
    int asiento;
    string aerolinea;
    Fecha fechaV;
    Hora horaPartida;
    Hora horaLlegada;
    int costo;
    void generarBoleta();
};

#endif //PROYECTOFINAL_PS_BOLETA_H
