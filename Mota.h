#ifndef MOTA_H
#define MOTA_H //verificar se identificador foi aberto anteriormente

#include "Veiculo.h"

class Mota : public Veiculo {
    private:
        int cc;

    public:
        Mota(string nome, int cilindrada); //criaçao do construtor
        virtual void MostrarDetalhes() override; 
};

#endif
