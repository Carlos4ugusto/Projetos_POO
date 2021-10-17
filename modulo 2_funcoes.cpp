//Estressados - Módulo II
//Acesso
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;
//Inverter cópia
//retorna um novo vetor com os dados invertidos
vector<int> inverter_com_copia(const vector<int>& v){
    vector<int> x_vector = v;
    reverse(x_vector.begin(), x_vector.end());
    return x_vector;
}
//inverte os valores do vetor de entrada sem uso de vetor auxiliar
void inverter_inplace(vector<int>& v){
    return reverse(v.begin(), v.end());
}
//sortear
//retorna aleatoriamente um elemento do vetor
int sortear( const vector<int>& v){
    int aleatorio = rand() % v.size() + 1;
    return v[aleatorio];
}
//embaralhar
//embaralha o vetor original
void embaralhar(vector<int>& v){
    for (int i = 0; i < v.size; i++){
        int r = rand() % v.size;

        int t = v[i];
        v[i] = v[r];
        v[r] = t;
    }
}
//ordena o vetor original
void ordenar(vector<int>& v){

    sort(v.begin(), v.end(), greater <>());

    for(int i =0; i<v.size(); i++){
        cout << v[i] << '\n';
    }

}

int main(){
    inverter_com_copia({6, 7, 8, 9, 10});
    inverter_inplace({6,7, 8, 9, 10});
    sortear({6,7, 8, 9, 10});
    embaralhar({6,7, 8, 9, 10});
    ordenar({6, 7, 8, 9, 10});
    
    return 0;
}