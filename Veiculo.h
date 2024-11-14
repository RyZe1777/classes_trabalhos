#ifndef VEICULO_H //verificar se identificador foi aberto anteriormente
 #define VEICULO_H //define caso seja incluido again ignora

#include <iostream>
using namespace std;


class Veiculo {
    protected: //protected pois pode ser acessada pelos "filhos"
        string nome_veiculo;

    public:
        Veiculo(string nome_veiculo);
        virtual void MostrarDetalhes();  // virtual pois temos que dar overwrite neste método
};

#endif
