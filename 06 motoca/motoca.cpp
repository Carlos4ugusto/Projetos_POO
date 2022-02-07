#include <iostream>
#include <sstream>


using namespace std;

struct Pessoa{
    std::string nome;
    int idade;

    Pessoa(std::string nome = "", int idade = 0){
        (*this).nome = nome;
        this->idade = idade;
    }

    Pessoa filho(Pessoa pais){
        Pessoa filho;
        filho.nome = this->nome + " " + pais.nome;
        filho.idade = this->idade + pais.idade;
        return filho;
    }

    friend std::ostream& operator<<(std::ostream& os, const Pessoa& p){
        os << "Nome: " << p.nome << " Idade: " << p.idade;
        return os;
    }
};

struct Motoca {
    Pessoa *pessoa{nullptr};
    int tempo;
    int potencia;

    Motoca(Pessoa *pessoa = nullptr, int tempo = 0, int potencia = 1){
        this->pessoa = pessoa;
        this->tempo = tempo;
        this->potencia = potencia;
    }

    Motoca(int tempo = 0, int potencia = 1){
        this->tempo = tempo;
        this->potencia = potencia;
    }

    void inserirPessoa(Pessoa *pessoa){
        this->pessoa = pessoa;
    }

    Pessoa *removerPessoa(){
        if(pessoa != nullptr){
            cout << "Pessoa removida: " << *pessoa << endl;
            Pessoa *aux = pessoa;
            pessoa = nullptr;
            return aux;
        }
    }

    friend std::ostream& operator<<(std::ostream& os, const Motoca& m){
        os << "Tempo: " << m.tempo << " Potencia: " << m.potencia << " Pessoa: " << *m.pessoa;
        if(m.pessoa == nullptr){
            os << " Motoca vazia";
        } else {
            os << " Motoca cheia";
        }
        return os;
    }
};

int main(){
    Motoca m(5, 2);//Motoca vazia com tempo 10 e potencia 2

    while (true){//Enquanto não for digitado 0
        int init;
        cout << "Digite 0 para sair ou 1 para inserir uma pessoa: ";
        cin >> init;
        if(init == 0){
            break;
        }

        cout << "Digite o tempo: ";
        int tempo;
        cin >> tempo;
        cout << "Digite a potencia: ";
        int potencia;
        cin >> potencia;
        cout << "Digite o nome: ";
        std::string nome;
        cin >> nome;
        cout << "Digite a idade: ";
        int idade;
        cin >> idade;

        Pessoa p(nome, idade);//nova pessoa com os dados digitados
        m.inserirPessoa(&p);//insere a pessoa na motoca e retorna a pessoa removida
        cout << "Motoca: " << m << endl;
        cout << "Motoca: " << m.removerPessoa() << endl;

    }
    
    return 0;
}