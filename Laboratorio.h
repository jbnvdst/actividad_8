#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "computadora.h"

class Laboratorio
{
    computadora arreglo [5];
    size_t cont;
public:
    Laboratorio();
    void agregarComputadora(const computadora &z);
    void mostrar();
    void respaldar_tabla();
    void recuperar();

    friend Laboratorio& operator<<(Laboratorio &a, const computadora &z)
    {
        a.agregarComputadora(z);

        return a;
    }
};


#endif
