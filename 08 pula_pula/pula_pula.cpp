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
    while(true) {//enquanto nao for digitado 0 sai do programa
        string line;//string que recebe a entrada
        getline(cin, line);
        if (line == "") break;
        istringstream iss(line);//converte a string para um stream de dados
        string cmd;
        iss >> cmd;//pega o primeiro comando da string
        if (cmd == "init") {//se for init inicializa a lista de crianças
            int max_kids;
            iss >> max_kids;
            p.init(max_kids);
        } else if (cmd == "arrive") {//se for arrive adiciona uma criança na lista de espera
            string nome;
            int idade;
            iss >> nome >> idade;
            KID c(nome, idade);
            p.arrive(c);
        } else if (cmd == "enter") {//se for enter entra na lista de espera
            string nome;
            iss >> nome;
            KID c(nome, 0);
            p.enter(c);
        } else if (cmd == "leave") {//se for leave sai da lista de espera
            string nome;
            iss >> nome;
            KID c(nome, 0);
            p.leave(c);
        } else if (cmd == "remove") {//se for remove remove o kid com o nome passado
            string nome;
            iss >> nome;
            KID c = p.remove(nome);
            cout << c.getNome() << endl;
        } else if (cmd == "print") {//se for print imprime a lista de crianças
            cout << p.toString() << endl;
        }
    }
    return 0;
}