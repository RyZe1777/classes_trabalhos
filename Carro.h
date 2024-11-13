#ifndef CARRO_H
#define CARRO_H

#include "Veiculo.h"

class Carro : public Veiculo {
    private:
        int numero_de_portas;

    public:
        Carro(string nome , int portas); //construtor
        virtual void MostrarDetalhes() override;  // vai "duplicar" o original e adicionar atributos // virtual pois temos que dar overwrite neste metodo
};

#endif
