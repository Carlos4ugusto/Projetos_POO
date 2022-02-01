#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Pessoa{
    //definição de atributos
    private:
    int id;
    string nome;
    int idade;
    //definição de métodos
    public:
    Pessoa( int _id, string _nome, int _idade);

    void setId( int _id );
    int getId();

    void setNome( string _nome );
    string getnome;

    void setIdade( int _idade );
    int getIdade;
};
    //construtor
    Pessoa::Pessoa( int _id, string _nome, int _idade){
        id = _id;
        nome = _nome;
        idade = _idade;
    }
    void Pessoa::setId( int _id ){
        id = _id;
    }
    int Pessoa::getId(){
        return id;
    }
    void Pessoa::setNome( string _nome ){
        nome = nome;
    }
    string Pessoa::getNome(){
        return nome;
    }
    void Pessoa::setIdade(int _idade){
        idade = idade;
    }
    int Pessoa::getIdade(){
        return idade;
    }


int main (){
    Pessoa amigo = Pessoa( 1, "Joao", 30 );
    //amigo.id = 1;
    //amigo.nome = "Pedro";
    //amigo.idade = 20;
    
 //   amigo.setId( 1 );
    cout << "ID " << amigo.getId();
 //   amigo.setNome( "Maria" );
    cout << "Nome " << amigo.getNome();
  //  amigo.setIdade( 20 );
    cout << "Idade " << amigo.getIdade();

    //cout << "ID " << amigo.id << endl;
    //cout << "NOME " << amigo.nome << endl;
    //cout << "IDADE " << amigo.idade << endl;

    getch();
    return 0;
}