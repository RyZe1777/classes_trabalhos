#include <iostream>
using namespace std;

class Veiculo{
    
    private:
    
        string nome_veiculo;
        
        
    public:
        Veiculo(string nome_veiculo);
        
        virtual void MostrarDetalhes(){
            cout << "O nome do Veiculo é" << nome_veiculo <<endl;
        }
};


class Carro : public Veiculo{
    
    private:
        int numero_de_portas;
        
    public:
        Carro(string nome_veiculo,int portas);
        
        virtual void MostrarDetalhes(){
            cout << "O nome do veiculo é: <<
        }
        
        
    
}


class Mota: public Veiculo{
    
}
