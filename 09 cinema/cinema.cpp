#include <iostream>
#include <string>
#include <sstream>
#include <list>
#include <vector>

using namespace std;

class Cliente {
private:
    string id;
    string fone;

public:
    Cliente(string id, string fone) {}//construtor da classe cliente com dois parametros
    friend ostream& operator<<(ostream& os, const Cliente& c) {// sobrecarga do operador <<
        os << "Cliente: " << c.id << " " << c.fone << endl;//imprime o id e o fone do cliente
        return os;
    }

    string toString(){
        return "Cliente: " + id + " " + fone;//
    }
    string getId(){
        return id;
    }
    void setId(string id){
        this->id = id;
    }
    string getFone(){
        return fone;
    }
    void setFone(string fone){
        this->fone = fone;
    }
};

class Cinema {
    private:
    vector<Cliente> cadeiras;
    public:
    Cinema(int max_cadeiras){//construtor
        for(int i = 0; i < max_cadeiras; i++){
            Cliente c("", "");
            cadeiras.push_back(c);
        }
    }
    friend ostream& operator<<(ostream& os, const Cinema& c) {//sobrecarga do operador <<
        os << "Cinema: " << endl;
        for(int i = 0; i < c.cadeiras.size(); i++){
            os << c.cadeiras[i];
        }
        return os;
    }
    void setCliente(string id, string fone){
        for(int i = 0; i < cadeiras.size(); i++){
            if(cadeiras[i].getId() == ""){
                cadeiras[i].setId(id);
                cadeiras[i].setFone(fone);
                break;
            }
        }
    }
    void removeCliente(string id){
        for(int i = 0; i < cadeiras.size(); i++){
            if(cadeiras[i].getId() == id){
                cadeiras[i].setId("");
                cadeiras[i].setFone("");
                break;
            }
        }
    }
    string getCliente(string id){
        for(int i = 0; i < cadeiras.size(); i++){
            if(cadeiras[i].getId() == id){
                return cadeiras[i].toString();
            }
        }
        return "";
    }
};

int main(){
    Cinema c(0);//cria um cinema com 0 cadeiras
    while(true){
        string line;
        getline(cin, line);
        stringstream ss(line);
        string cmd;
        ss >> cmd;
        if(cmd == "add"){
            string id, fone;
            ss >> id >> fone;
            c.setCliente(id, fone);
        }
        else if(cmd == "remove"){
            string id;
            ss >> id;
            c.removeCliente(id);
        }
        else if(cmd == "get"){
            string id;
            ss >> id;
            cout << c.getCliente(id) << endl;
        }
        else if(cmd == "end"){
            break;
        }
    }
    return 0;
}