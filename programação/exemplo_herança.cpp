#include <iostream>
#include <string>


using namespace std;

class Pessoa {
    public: 
    string nome{};
    int idade{};

    Pessoa(const string& nome = "", int idade = 0){
        this->nome = nome;
        this->idade = idade;
    }

    const string getNome(){
        return nome;
    }

    int getIdade(){
        return idade;
    }
};

class Animal : public Pessoa{//herda de Pessoa e tem seus atributos e métodos publicos
    public:
    string raca{};
    string cor{};

    Animal(const string& nome = "", int idade = 0, const string& raca = "", const string& cor = "") : Pessoa(nome, idade){
        this->raca = raca;
        this->cor = cor;
    }

    const string getRaca(){
        return raca;
    }

    const string getCor(){
        return cor;
    }
};

int main(){
    Animal animal("Rex", 5, "Vira-lata", "Cinza");
    cout << animal.getNome() << endl;
    cout << animal.getIdade() << endl;
    cout << animal.getRaca() << endl;
    cout << animal.getCor() << endl;
    return 0;
}