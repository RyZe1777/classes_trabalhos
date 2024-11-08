#include "Veiculo.h"

Veiculo::Veiculo(string nome_veiculo) : nome_veiculo(nome_veiculo) {}

void Veiculo::MostrarDetalhes() { //virtual pois temos que dar overwrite neste metodo
    cout << "O nome do Veiculo é: " << nome_veiculo << endl;
}
