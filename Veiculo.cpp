#include "Veiculo.h"

Veiculo(string vehicle_name) : vehicle_name(vehicle_name) {}

void Veiculo::mostrarDetalhes() {
    cout << "Nome do veículo: " << vehicle_name << endl;
}
