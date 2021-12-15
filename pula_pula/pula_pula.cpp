#include <iostream>
#include <string>
#include <sstream>//biblioteca para conversao de string para int
#include <list>

using namespace std;

class KID {
    public:
    
        KID(string nome, int idade) {
            this->nome = nome;
            this->idade = idade;
        }
        string toString() {//retorna o nome e a idade
            return nome + " " + to_string(idade);//converte para string
        }
        string getNome() {
            return this->nome;
        }
        int getIdade() {//retorna a idade 
            return idade;
        }
        void setnome(string nome) {//altera o nome
            this->nome = nome;
        }
        void setIdade(int idade) {
            this->idade = idade;
        }
        void imprime() {
            std::cout << "nome: " << this->nome << std::endl;
            std::cout << "idade: " << this->idade << std::endl;
        }
    private:
        string nome;
        int idade;

};
class pula_pula {
    private:
        list<KID> kids_waiting;
        list<KID> kids_playing;
        int max_kids;
    
    public: 
        void init(int max_kids) {//inicializa a lista de crianças
            this->max_kids = max_kids;//maximo de crianças
        }
    string toString() {//retorna a lista de crianças
        string linha = "=> ";
        list<KID>::reverse_iterator rit = kids_waiting.rbegin();
        for (int i = 0; i < kids_waiting.size(); i++) {
            linha += rit->toString() + " ";//concatena os nomes e idades
            rit++;
            linha += "=> [ ";
        }
        return linha;
        list<KID>::reverse_iterator rt = kids_playing.rbegin();
        for (int i = 0; i < kids_playing.size(); i++) {
            linha += rt->toString() + " ";//concatena os nomes
            rt++;
            linha += "]";
        }

        return linha;
    }
    void arrive(KID c){//adiciona uma criança na lista de espera
        this->kids_waiting.push_back(c);
    }
    void enter(KID c){//entra na lista de espera
        if (kids_waiting.size() > 0) {//se tiver alguem na lista de espera
            kids_waiting.pop_front();//remove o primeiro da lista
            kids_playing.push_back(c);//adiciona o novo
        }
    }
    void leave(KID c){//sai da lista de espera
        if (kids_playing.size() > 0){//se tiver alguem na lista de jogando
            kids_playing.pop_front();//remove o primeiro da lista
            kids_waiting.push_back(c);//adiciona o novo
        }
    }
    KID remove(string nome){//remove o kid com o nome passado
        KID c = kids_playing.front();//pega o primeiro da lista jogando
        kids_playing.pop_front();//remove o primeiro da lista
        return c;
    }        
    };

int main() {
    pula_pula p;
    p.init(5);//inicializa a lista de crianças com 5
    KID c1("Carlos", 10);//cria um kid
    KID c2("Emy", 12);//cria um kid
    KID c3("Junior", 14);//cria um kid
    KID c4("Joao", 16);//cria um kid
    KID c5("Maria", 18);//cria um kid

    p.arrive (c1);//adiciona o kid na lista de espera
    p.arrive (c2);
    p.arrive (c3);
    p.arrive (c4);
    p.arrive (c5);

    p.enter(c1);//entra na lista de espera
    p.enter(c2);
    p.enter(c3);
    p.enter(c4);
    p.enter(c5);

    p.leave(c1);//sai da lista de espera
    p.leave(c2);
    p.leave(c3);
    p.leave(c4);
    p.leave(c5);

    cout << p.toString() << endl;//imprime a lista de crianças





    return 0;
}
