#include <iostream>
#include <string>
using std::cout;
using std::string;

class Pessoa {
    public:
    string nome;
    int dinheiro;

    Pessoa(string nome, int dinheiro) {
        this->nome = nome;
        this->dinheiro = dinheiro;
    }

    int operator+(Pessoa other) {
        return this->dinheiro + other.dinheiro;
    }

    auto operator==(Pessoa other) {
        return this->dinheiro + other.dinheiro;
    }

    auto operator<=>(Pessoa other) {
        return this->dinheiro <=> other.dinheiro;
    }
};

template <class generico>
int soma(generico a, generico b) {
    return a + b;
}

int main() {
    Pessoa pessoa1("Pedro", 100);
    Pessoa pessoa2("Emilly", 200);
    cout << (pessoa1 < pessoa2) << "\n";
    cout << (pessoa1 != pessoa2) << "\n";
    cout << soma(pessoa1, pessoa2) << "\n";
}

//
#include <iostream>
#include <string>

using namespace std;

class Pessoa
{
    public:
    string nome;
    int dinheiro= 0;

    Pessoa(string nome, int dinheiro)
    {
        this->nome = nome;
        this->dinheiro = dinheiro;
    }

    int operator+(Pessoa other) {
        return this->dinheiro + other.dinheiro;
    }

    auto operator==(Pessoa other)
    {
        return this->dinheiro + other.dinheiro;
    }

};

template <class emy>
int soma(emy a, emy b)
{
    return a + b ;
}

int main()
{
    Pessoa pessoa1 ("Carlos", 2300);
    Pessoa pessoa2 ("Emilly", 9);

    cout << soma(pessoa1, pessoa2) << "\n";
}

