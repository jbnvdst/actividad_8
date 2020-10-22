#include "Laboratorio.h"
#include <fstream>

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


void Laboratorio::respaldar_tabla()
{
    ofstream archivo("computadoras.txt");
    if(archivo.is_open())
    {
        archivo << left;
        archivo << setw(10) << "Sistema Operativo";
        archivo << setw(6) << "Memoria Ram";
        archivo << setw(6) << "Memoria Interna";
        archivo << setw(10) <<"Marca";
        arch << endl;
        for(size_t i = 0;  i < cont; i++)
    {
            computadora &z = arreglo[i];
            archivo << z;
    }

    archivo.close();
    }
}

void Laboratorio::recuperar()
{
    ifstream archivo("computadoras.txt");

    if(archivo.is_open())
    {
        string temp;
        computadora z;

        while (true)
        {
            getline(archivo, temp);
            z.setSistema(temp);

            getline(archivo, temp);
            z.setRam(temp);

            getline(archivo, temp);
            z.setMemoria(temp);

            getline(archivo, temp);
            z.setMarca(temp);

            agregarComputadora(z)

        }
    }

    archivo.close();
}
