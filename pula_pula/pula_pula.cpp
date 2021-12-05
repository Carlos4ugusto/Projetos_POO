#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

class KID {
    public:
        KID(std::string nome, int idade) {
            this->nome = nome;
            this->idade = idade;
        }
        string getNome() {
            return nome;
        }
        int getIdade() {
            return this->idade;
        }
        void setnome(string nome) {
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
class pula_pula:
    
    public KID {
    public:
        pula_pula(vector<int> kids_waiting, vector<int> kids_playing){
            list<int> kids_waiting;
            list<int> kids_playing;
            int tam;
            int tam2;
            tam = kids_waiting.size();
            for(int i = 0; i < tam; i++) {
                kids_waiting.push_back(kids_waiting[i]);
            }
            tam2 = kids_playing.size();
            for(int i = 0; i < tam2; i++) {
                kids_playing.push_back(kids_playing[i]);
            }

        void add_kid(int idade){
            kids_waiting.push_back(idade);
        }
        void remove_kid(int idade) {
            kids_waiting.remove(idade);
        }
        void add_kid_playing(int idade) {
            kids_playing.push_back(idade);
        }
        void remove_kid_playing(int idade) {
            kids_playing.remove(idade);
        }
        void imprime() {
            std::cout << "kids_waiting: " << kids_waiting << std::endl;
            std::cout << "kids_playing: " << kids_playing << std::endl;
        }
    private:
        list<int> kids_waiting;
        list<int> kids_playing;
};

int main() {
    vector<int> kids_waiting;
    vector<int> kids_playing;
    pula_pula pula_pula(kids_waiting, kids_playing);
    pula_pula.add_kid(10);

}
