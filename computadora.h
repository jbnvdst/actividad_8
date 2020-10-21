#ifndef computadora_h
#define computadora_h

#include <iostream>
#include <iomanip>

using namespace std;

class computadora
{
private:
    string sistema_operativo;
    string memoria_ram;
    string memoria_interna;
    string marca;

public:
    computadora();
    computadora(const string &sistema_operativo, const string &memoria_ram, const string &memoria_interna, const string marca);

    void setSitema(const string &a);
    string getSistema();

    void setRam(const string &a);
    string getRam();

    void setMemoria(const string &a);
    string getMemoria();

    void setMarca(const string &a);
    string getMarca();

    friend ostream& operator<<(ostream &out, const computadora &z)
    {
        out << left;
        out << setw(10) << z.sistema_operativo;
        out << setw(6) << z.memoria_ram;
        out << setw(6) << z.memoria_interna;
        out << setw(10) << z.marca;
        out << endl;

        return out;
    }

    friend istream& operator>>(istream &in, computadora &z)
    {
        //string temp;

        cout << "Sistema Operativo:";
        getline(cin, p.sistema_operativo);

        cout << "Memoria Ram:";
        getline(cin, p.memoria_ram);

        cout << "Memoria Interna:";
        getline(cin, p.memoria_interna);

        cout << "Marca:";
        getline(cin, p.marca);

        return in;
    }

};

#endif computadora_h
