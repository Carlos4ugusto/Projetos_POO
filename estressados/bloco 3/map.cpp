#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

vector<int> sozinhos(const vector<int>& v){
    vector<int> sozinhos;
    int contador = 0;

    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v.size(); j++){    

        if(abs(v[i]) == abs(v[j]))
            contador++;
        }
        if(contador == 1){
            sozinhos.push_back(v[i]);

        else{
            contador = 0;
        }
     
    }

    return sozinhos;
}

int mais_ocorrencias(vector<int> v){
    int maior = 0, contador = 0;

    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v.size(); j++){
            if(abs(v[i]) == abs(v[j]))
                contador++;
            }
        if(i == 0)
            maior = contador;
        else
            if(contador > maior){
                maior = contador;
            }
        contador = 0;
    }
    return maior;
}

int main(){
    std::cout << sozinhos({1, 3, 4, 3, -1, -2, -2}) << "\n";
    std::cout << mais_ocorrencias({1, 3, 4, 3, -1, -2, -2}) << "\n";

    return 0;
}


