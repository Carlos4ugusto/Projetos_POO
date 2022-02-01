#include <iostream>
#include <sstream>
#include <list>

using namespace std;

class Fone{
    private: 
    string id;
    string numero;
    
    public:
    Fone(string id, string numero)
    {
        this->id = id;
        this->numero = numero;
    }
    static bool valido(string numero){//verifica se o numero é valido
        if(numero.size() != 11)
            return false;
        for(int i = 0; i < numero.size(); i++)
            if(!isdigit(numero[i]))
                return false;
        return true;
    }
    string getId(){
        return id;
    }
    void setId(string id){
        this->id = id;
    }
    string getNumero(){
        return numero;
    }
    void setNumero(string numero){
        this->numero = numero;
    }
    friend ostream& operator<<(ostream& os, Fone& fone){
        os << "Id: " << fone.id << " Numero: " << fone.numero;
        return os;
    }
};

class Contato{
    private:
    string nome;
    list<Fone> fones;
    public:
    Contato(string nome){
        this->nome = nome;
    }

    void addFone(Fone fone){
        fones.push_back(fone);
    }
    void removeFone(string id){//remove o fone com o id passado
        for(list<Fone>::iterator it = fones.begin(); it != fones.end(); it++){
            if(it->getId() == id){//se encontrar o id
                fones.erase(it);
                break;
            }
            else if (it == fones.end())//se não encontrar o id
                cout << "Fone não encontrado" << endl;
                break;
        }   
    }
    void setNome(string nome){
        this->nome = nome;
    }
    string getNome(){
        return nome;
    }
    list <Fone> getFones(){
        return fones;
    }
    friend ostream& operator<<(ostream& os, Contato& contato){
        os << "Nome: " << contato.nome << endl;
        for(list<Fone>::iterator it = contato.fones.begin(); it != contato.fones.end(); it++)
            os << *it << endl;
        return os;
    }

};

int main(){
    Contato c(" ");
    Fone f(" "," ");
    string nome, id, numero;
    int opcao;
    while(true){
        cout << "1 - Adicionar contato" << endl;
        cout << "2 - Remover contato" << endl;
        cout << "3 - Adicionar fone" << endl;
        cout << "4 - Remover fone" << endl;
        cout << "5 - Listar contatos" << endl;
        cout << "6 - Sair" << endl;
        cin >> opcao;
        switch(opcao){
            case 1:
                cout << "Digite o nome do contato: ";
                cin >> nome;
                c.setNome(nome);
                break;
            case 2:
                cout << "Digite o nome do contato: ";
                cin >> nome;
                if(c.getNome() == nome)
                    c.setNome(" ");
                else
                    cout << "Contato não encontrado" << endl;
                break;
            case 3:
                cout << "Digite o id do fone: ";
                cin >> id;
                cout << "Digite o numero do fone: ";
                cin >> numero;
                if(Fone::valido(numero)){
                    f.setId(id);
                    f.setNumero(numero);
                    c.addFone(f);
                }
                else
                    cout << "Numero invalido" << endl;
                break;
            case 4:
                cout << "Digite o id do fone: ";
                cin >> id;
                c.removeFone(id);
                break;
            case 5:
                cout << c << endl;
                break;
            case 6:
                return 0;
            default:
                cout << "Opcao invalida" << endl;
        }
    }
}