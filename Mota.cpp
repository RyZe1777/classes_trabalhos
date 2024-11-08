#include "Mota.h"

Mota::Mota(string nome, int cilindrada) : Veiculo(nome), cc(cilindrada) {} //vamos dizer oq de facto o construtor vai fazer

void Mota::MostrarDetalhes() {
    cout << "O nome da Mota é: " << nome_veiculo << " / E esta tem: " << cc << " de cilindrada" << endl;
}
