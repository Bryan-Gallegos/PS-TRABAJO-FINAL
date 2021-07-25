//
// Created by USUARIO on 24/7/2021.
//

#ifndef PROYECTOFINAL_PS_HORA_H
#define PROYECTOFINAL_PS_HORA_H


class Hora {
public:
    Hora();
    Hora(int h, int m);

    Hora(Hora *pHora);

    int hora;
    int minuto;
};


#endif //PROYECTOFINAL_PS_HORA_H
