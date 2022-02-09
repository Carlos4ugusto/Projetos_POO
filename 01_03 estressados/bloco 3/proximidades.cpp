#include <iostream>
#include <string>
#include <vector>
#include <algorithm>//para usar o sort

using namespace std;

int proximidade(vector<int> v){//calcula a proximidade entre dois vetores
    int briga = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i - 1] >= 30 && v[i] >= 50 && v[i + 1] >= 30){
            briga++;
        }
        return briga;
}

vector<int> apaziguados(vector<int> v){//calcula os apaziguados
    vector<int> apaziguados;
    for(int i = 0; i < v.size(); i++){
        if(v[i] >= 50){
            apaziguados.push_back(i);
        }
    }
    return apaziguados;
}


int main(){
     apaziguados({1, 90, 82, 2, 90});
     proximidade({1, 90, 82, 2, 90});

    return 0;
}

