#include "Carro.h"

Carro::Carro(string nome , int portas) : Veiculo(nome), numero_de_portas(portas) {} //construtor da classe Carro, que inicializa o nome do veículo (construtor da classe Veículo)
                                                                                    //e o número de portas.

void Carro::MostrarDetalhes() {
    cout << "O nome do Carro é: " << nome_veiculo << " / E este tem: " << numero_de_portas << " portas" << endl;
}
