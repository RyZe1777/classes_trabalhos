#include "Carro.h"
#include "Mota.h"

int main() {
    Carro meuCarro("Porsche 964 turbo", 2);
    Mota minhaMota("Kawasaki Ninja 400", 400);

    meuCarro.MostrarDetalhes();
    minhaMota.MostrarDetalhes();

    return 0;
}
