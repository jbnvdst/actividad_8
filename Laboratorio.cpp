#include "Laboratorio.h"

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarComputadora(const computadora& z)
{
    if (cont < 5)
    {
        arreglo[cont] = z;
        cont++;
    }
    else
    {
        cout <<  "Arreglo lleno" << endl;
    }
}

void Laboratorio::mostrar()
{
    cout << left;
    cout << setw(10) << "Sistema Operativo";
    cout << setw(6) << "Memoria Ram";
    cout << setw(6) << "Memoria Interna";
    cout << setw(10) <<"Marca";
    cout << endl;
    for(size_t i = 0;  i < cont; i++)
    {
        computadora &z = arreglo[i];
        count << p;
        //cout << "Sistema operativo: " << z.getSistema(); << endl;
        //cout << "Memoria RAM: " << z.getRam(); << endl;
        //cout << "Memoria Interna: " << z.getMemoria(); << endl;
        //cout << "Marca: " << z.getMarca(); << endl;
    }
}
