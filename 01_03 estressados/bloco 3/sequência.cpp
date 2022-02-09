#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int qtd_times(vector<int> &v) {//retorna a quantidade de elementos de um vetor
    int qtd = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == 1) {
            qtd++;
        }
    }
    return qtd;
}

int maior_time(vector<int> &v) {//retorna o maior elemento de um vetor
    int maior = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }
    return maior;
}

int sozinhos(vector<int> &v) {//retorna a quantidade de elementos iguais a 1
    int qtd = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == 1) {
            qtd++;
        }
    }
    return qtd;
}

int main(){
    cout << sozinhos({1,1,1,1,1}) << '\n';


    return 0;
}