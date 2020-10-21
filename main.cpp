#include <iostream>
#include "Laboratorio.h"

using namespace std;

int main()
{
    computadora z01 = computadora("Windows", "8 GB", "1TB", "DELL");

    computadora z02;
    z02.setSitema("MACINTOSH");
    z02.setRam("12GB");
    z02.setMemoria("4TB");
    z02.setMarca("Apple");

    Laboratorio lb;
    lb.agregarComputadora(z01);
    lb.agregarComputadora(z02);

    computadora z04;
    cin >> z04;
    lb << z04; << z02;

    lb.mostrar();

    //cout << z02;


    return 0;
}
