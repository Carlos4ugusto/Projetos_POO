#include <iostream>
#include <string>


using namespace std;

struct Pessoa{
    std::string nome;
    int idade;

    Pessoa(std::string nome = "", int idade = 0){
        (*this).nome = nome;
        this->idade = idade;
    }

    friend std::ostream& operator<<(std::ostream& os, const Pessoa& p){
        os << "Nome: " << p.nome << " Idade: " << p.idade;
        return os;
    }
};

struct Motoca {

        Pessoa pessoa;
        Motoca() {}
        void inserirPessoa  (Pessoa pessoa) {
            this->pessoa = pessoa;
        }
    };
    

    int main() {
        Motoca motoca;
        Pessoa pessoa("Joao", 20);
        motoca.inserirPessoa(pessoa);
        cout << motoca.pessoa;
        return 0;
    }