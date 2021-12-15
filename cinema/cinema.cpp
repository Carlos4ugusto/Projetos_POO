#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Cliente {
private:
    string id;
    string fone;

public:
    Cliente(string id, string fone) {
        this->id = id;
        this->fone = fone;
    }
    string toString() {
        return id + " " + fone;
    }

};

class Cinema {
    vector<int>& cadeiras;
    int capacidade;
    Cinema(vector <int>& cadeiras, int capacidade) {
        this->cadeiras = cadeiras;
        this->capacidade = capacidade;
    }
};