#include "Carro.h"

Carro::Carro(string nome , int portas) : Veiculo(nome), numero_de_portas(portas) {}

void Carro::MostrarDetalhes() {
    cout << "O nome do Carro é: " << nome_veiculo << " / E este tem: " << numero_de_portas << " portas" << endl;
}
