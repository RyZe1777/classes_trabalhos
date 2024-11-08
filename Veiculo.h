#ifndef VEICULO_H
#define VEICULO_H


#include <iostream>

using namespace std;

class Veiculo {
    protected:
        string vehicle_name;

    public:
        Veiculo(string vehicle_name);
        virtual void mostrarDetalhes();
};

#endif
