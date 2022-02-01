#include <iostream>
#include <list>

using namespace std;

int main(){
    list <int> aula;
    int tam;
    list <int>::iterator it;
    
    tam = 10;
    for(int i = 0; i < tam; i++){
        aula.push_back(i);//insere no final
    }

    /*it = aula.begin();//inicio da lista
    advance(it, 5);//avança o iterador 5 posições
    aula.insert(it, 10);//insere elementos na posição 5*/

    cout << "Tamanho da lista: " << aula.size() << endl;

    aula.sort();//ordena a lista
    aula.reverse();//inverte a lista

    tam=aula.size();
    for(int i = 0; i < tam; i++){
        cout << aula.front() << endl;//imprime o primeiro elemento da lista
        aula.pop_front();
    }
}
