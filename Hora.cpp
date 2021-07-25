//
// Created by USUARIO on 24/7/2021.
//

#include "Hora.h"

Hora::Hora(int h, int m) {
    hora=h;
    minuto=m;
}

Hora::Hora() {
    hora=0;
    minuto=0;
}

Hora::Hora(Hora *pHora) {
    hora=pHora->hora;
    minuto=pHora->minuto;
}
