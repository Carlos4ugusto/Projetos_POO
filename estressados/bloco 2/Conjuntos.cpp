//Conjuntos 3 funções
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;
//exclusivos: O fiscal permitiu a entrada de um único representante de cada valor, ou seja, uma lista dos valores que aparecem na fila sem repetição. Que conjunto foi formado?
//
vector<int> exclusivos(const vector<int>& v){
    vector<int> exclusivos;
    int contador;
    for (int i = 0; i < v.size(); i++){
        for (int j = 0; j < v.size(); j++){
            if (v[i] == v[j])
            contador ++;
        }
        if (contador == 0)
        exclusivos.push_back(v[i]);
        else
        contador = 0;

    }

    return exclusivos;
}
//abandonados: quais pessoas ficaram na fila após remover um exemplar de cada valor?
vector<int> abandonados(vector<int>& v){
    vector<int> abandonados;
    int contador = 1;

    for (int i = 0; i < v.size(); i++){
        for (int j = i + 1; j < v.size(); j++){
            if (v[i] == v[j])
                contador++;
        }
        if (contador > 1)
        {
            abandonados.push_back(v[i]);
        }
        contador = 1;
    }
    return abandonados;
}

int main() {
    cout << exclusivos({{1, 3, 4, 3, -1, -2, -2} -> {1, 3, 4, -1, -3}}) << "\n";
    cout << abandonados({1, 3, 4, 3, -1, -2, -2} -> {3, -2}); << "\n";

    return 0;
}

