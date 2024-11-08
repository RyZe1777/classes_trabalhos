#include <iostream>
using namespace std;

class Veiculo{
    
    protected: //protected pois pode ser acessada pelos "filhos"
    
        string nome_veiculo;
        
        
    public:
        Veiculo(string nome_veiculo) : nome_veiculo(nome_veiculo){
            
        }
        
        virtual void MostrarDetalhes(){  //virtual pois temos que dar overwrite neste metodo
            cout << "O nome do Veiculo é: " << nome_veiculo << endl;
        }
};

class Carro : public Veiculo{
    
    private:
    
        int numero_de_portas;
        
    public:
        Carro (string nome , int portas) : Veiculo(nome), numero_de_portas(portas){
            
        }
        
        virtual void MostrarDetalhes() override{ //isto vai "duplicar" o original e adicionar atributos 
        
            cout << "O nome do Carro é: " << nome_veiculo << " / E este tem: " << numero_de_portas << " portas" <<endl;
        }
};

class Mota: public Veiculo{
    
    private:
    
        int cc;
        
    public:
        Mota(string nome, int celindrada) : Veiculo(nome), cc(celindrada){
            
        }
        virtual void MostrarDetalhes(){ 
        cout << "O nome da Mota é: " <<nome_veiculo << " / E esta tem: " << cc << " de celindrada" <<endl;
        }
};

int main(){
    
    Carro meuCarro ("Porsche 964 turbo",2);
    Mota minhaMota ("Kawasaki Ninja 400",400);
    
    meuCarro.MostrarDetalhes();
    minhaMota.MostrarDetalhes();
    
}
