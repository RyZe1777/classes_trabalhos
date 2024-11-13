#ifndef CARRO_H //verificar se foi aberto anteriormente
#define CARRO_H //define caso seja incluido again ignora

#include "Veiculo.h"

class Carro : public Veiculo {
    private:
        int numero_de_portas;

    public:
        Carro(string nome , int portas); //construtor
        virtual void MostrarDetalhes() override;  // vai "duplicar" o original e adicionar atributos // virtual pois temos que dar overwrite neste metodo
};

#endif //fecha a protecao
