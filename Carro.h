#ifndef CARRO_H
#define CARRO_H

#include "Veiculo.h"

class Carro : public Veiculo {
    private:
        int numero_de_portas;

    public:
        Carro(string nome , int portas);
        virtual void MostrarDetalhes() override;  // vai "duplicar" o original e adicionar atributos
};

#endif
