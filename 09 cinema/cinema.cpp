#include <iostream>
#include <string>
#include <sstream>
#include <list>

using namespace std;

class Cliente {
private:
    string id;
    string fone;

public:
    Cliente(string id, string fone) {}//construtor da classe cliente com dois parametros
    friend ostream& operator<<(ostream& os, const Cliente& c) {// sobrecarga do operador <<
        os << "Cliente: " << c.id << " " << c.fone << endl;//imprime o id e o fone do cliente
        return os;
    }

    string toString(){
        return "Cliente: " + id + " " + fone;//
    }
    string getId(){
        return id;
    }
    void setId(string id){
        this->id = id;
    }
    string getFone(){
        return fone;
    }
    void setFone(string fone){
        this->fone = fone;
    }
};

class Cinema {
    private:
    list<Cliente> cadeiras;//lista de cadeiras
    list<Cliente> getcadeiras(){
        return cadeiras;
    }
    public:
    Cinema(int max_cadeiras){//construtor
        for(int i = 0; i < max_cadeiras; i++){
            cadeiras.push_back(Cliente("", ""));//adiciona cadeiras
        }
    }
    bool reservar(string id, string fone, int cadeira){//reserva a cadeira
        if(cadeira > cadeiras.size()){//se a cadeira for maior que o maximo
            return false;
        }
    void cancelar(string id){//cancela a reserva
        list<Cliente>::iterator it = cadeiras.begin();
        for(int i = 0; i < cadeiras.size(); i++){
            if(it->getId() == id){
                it->setId("");
                it->setFone("");
            }
            it++;
        }
    }
    string toString(){//retorna a lista de cadeiras
        string linha = "=> ";
        list<Cliente>::iterator it = cadeiras.begin();
        for(int i = 0; i < cadeiras.size(); i++){
            linha += it->toString() + " ";//concatena os nomes e idades
            it++;
            linha += "=> [ ";
        }
        return linha;
    }
};

int main(){
    Cinema c(0);//cria um cinema com 0 cadeiras
    while(true){
        string comando;
        cin >> comando;
        if(comando == "reservar"){
            string id, fone;
            int cadeira;
            cin >> id >> fone >> cadeira;
            if(c.reservar(id, fone, cadeira)){
                cout << "Reserva realizada com sucesso" << endl;
            }else{
                cout << "Não foi possível realizar a reserva" << endl;
            }
        }else if(comando == "cancelar"){
            string id;
            cin >> id;
            c.cancelar(id);
        }else if(comando == "listar"){
            cout << c.toString() << endl;
        }else if(comando == "sair"){
            break;
        }
    }
    return 0;