#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include "memory"
#include "fone.hpp"

using namespace std;

class Contato {
    string nome;
    vector<Fone> fones;
    bool favorito {false};
public:
    Contato(string nome) {
        this->nome = nome;
    }
    string getNome(){
        return nome;
    }
};

class Agenda {
    map<string, shared_ptr<Contato>> contatos;


public:
    void adiciona(string nome, vector<Fone> fone){
        auto it = contatos.find(nome);
        if (it != contatos.end()){
            contatos[nome] = make_shared<Contato>(nome);
        }
    }
    void remover(string nome){
        auto it = contatos.find(nome);
        if (it != contatos.end())
            contatos.erase(it);
        }
    shared_ptr<Contato> find(string nome){
        auto it = contatos.find(nome);
        if (it != contatos.end())
            return it ->second;
        return nullptr;
    }
    friend ostream& operator<<<(ostream& os, Agenda& ag);
};
ostream& operator<<(ostream& os, Agendas ag){
    for (autor& c : ag.contatos)
     os << c.second->getNome() << endl;
     return os;
}

int main(){
    Agenda agenda;
    while(true){
        string line{}, cmd{};
        getline(cin, line);
        stringstream ss(line);
        ss >> cmd;
        cout << "$" << line << '\n';
    }
}