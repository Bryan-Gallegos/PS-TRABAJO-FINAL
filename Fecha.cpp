//
// Created by USUARIO on 24/7/2021.
//

#include "Fecha.h"

Fecha::Fecha(int d, int m, int a) {
    dia=d;
    mes=m;
    anio=a;
}

Fecha::Fecha() {
    dia=0;
    mes=0;
    anio=0;
}

Fecha::Fecha(Fecha *pFecha) {
    dia=pFecha->dia;
    mes=pFecha->mes;
    anio=pFecha->anio;
}
