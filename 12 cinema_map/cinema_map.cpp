#include <iostream>
#include <ostream>
#include <sstream>
#include <map>
#include <memory>

using namespace std;

class Pessoa{
    private:
        string nome;
        string fone;
        int idade;
    public:
        Pessoa(string nome, string fone, int idade){
            this->nome = nome;
            this->fone = fone;
            this->idade = idade;
        }
        string getNome(){
            return nome;
        }
        string getFone(){
            return fone;
        }
        int getIdade(){
            return idade;
        }
        void setNome(string nome){
            this->nome = nome;
        }
        void setFone(string fone){
            this->fone = fone;
        }
        void setIdade(int idade){
            this->idade = idade;
        }

        friend ostream& operator<<(ostream& os, Pessoa& pessoa){//operaaor de sobrecarga para imprimir um objeto da classe Pessoa
            os << "Nome: " << pessoa.getNome() << endl;
            os << "Fone: " << pessoa.getFone() << endl;
            os << "Idade: " << pessoa.getIdade() << endl;
            return os;
        }

};
class Sala{
    private:
    map<int, Pessoa> cadeiras;//mapa de pessoas que estao na sala

    bool verificaIdade(int idade){
        if(idade >= 18){
            return true;
        }
        return false;
    }
    public:
    Sala(){
        cadeiras.clear();//limpa o map
    }
    map<int, Pessoa> getCadeiras(){//retorna o map de cadeiras da sala
        return cadeiras;
    }
    bool reservar(int idade, string nome, string fone){//reserva uma cadeira para uma pessoa
        if(cadeiras.size() < 10){//verifica se a sala esta cheia
            if(verificaIdade(idade)){//verifica se a pessoa tem idade para entrar na sala
                Pessoa pessoa(nome, fone, idade);//cria uma pessoa
                cadeiras.insert(pair<int, Pessoa>(cadeiras.size(), pessoa));//insere a pessoa na sala
                return true;
            }
            return false;
        }
        return false;
    }
    void cancelar(int idade){//cancela uma cadeira
        if(cadeiras.size() > 0){//verifica se a sala esta vazia
            for(auto it = cadeiras.begin(); it != cadeiras.end(); it++){//percorre o map
                if(it->second.getIdade() == idade){//verifica se a pessoa tem idade para entrar na sala
                    cadeiras.erase(it);//remove a pessoa da sala
                    break;
                }
            }
        }
    }
    
    friend ostream& operator<<(ostream& os, Sala& sala){//operador de sobrecarga para imprimir um objeto da classe Sala
        os << "Cadeiras: " << endl;
        for(auto it = sala.getCadeiras().begin(); it != sala.getCadeiras().end(); it++){//percorre o map
            os << it->second;//imprime a pessoa
        }
        return os;
    }
};

int main(){
    Sala sala;
    while (true){
        string comando;
        cin >> comando;
        if(comando == "reservar"){
            int idade;
            string nome, fone;
            cin >> idade >> nome >> fone;
            if(sala.reservar(idade, nome, fone)){
                cout << "Reserva realizada com sucesso" << endl;
            }else{
                cout << "Nao foi possivel realizar a reserva" << endl;
            }
        }else if(comando == "cancelar"){
            int idade;
            cin >> idade;
            sala.cancelar(idade);
        }else if(comando == "imprimir"){
            cout << sala << endl;
        }else if(comando == "fim"){
            break;
        }
    }
    return 0;
}