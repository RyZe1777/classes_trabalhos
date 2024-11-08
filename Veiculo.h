#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>
using namespace std;

class Veiculo {
    protected: //protected pois pode ser acessada pelos "filhos"
        string nome_veiculo;

    public:
        Veiculo(string nome_veiculo);
        virtual void MostrarDetalhes();  //virtual pois temos que dar overwrite neste metodo
};

#endif
