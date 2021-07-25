//
// Created by USUARIO on 24/7/2021.
//

#ifndef PROYECTOFINAL_PS_FECHA_H
#define PROYECTOFINAL_PS_FECHA_H


class Fecha {
public:
    Fecha();
    Fecha(int d, int m, int a);

    Fecha(Fecha *pFecha);

    int dia;
    int mes;
    int anio;

};


#endif //PROYECTOFINAL_PS_FECHA_H
