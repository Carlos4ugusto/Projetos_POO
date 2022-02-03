#include <iostream>
#include <vector>
#include <map>
#include <memory>
#include <sstream>

using namespace std;

class Cadastro {
    public:
    Cadastro(string msg) : msg(msg) {}
    Cadastro(const Cadastro& c) : msg(c.msg) {}

    private:
    string msg;
};
class Conta{
    protected://protegido para que a classe filha possa acessar
    int id = 0;
    string cliente_id = "";
    float balança = 0.0;
    string tipo = "";

    public:
    Conta(int id, string cliente_id){
        this->id = id;
        this->cliente_id = cliente_id;
    }

    virtual ~Conta(){}//destrutor virtual

    virtual void atualiza_mensal() = 0;

    float getbalança(){
        return balança;
    }
    string getcliente_id(){
        return cliente_id;
    }
    int getid(){
        return id;
    }
    string gettipo(){
        return tipo;
    }
    void deposito(float valor){
        balança += valor;
    }
    void tansferencia(float valor, Conta& conta){
        if(valor > balança){
            cout << "Saldo insuficiente" << endl;
        if(valor < balança){
            balança -= valor;
            conta.deposito(valor);
        }
    }
    void retirar(float valor){
        if(valor > balança){
            cout << "Saldo insuficiente" << endl;
        }
        if(valor < balança){
            balança -= valor;
        }
        
    }