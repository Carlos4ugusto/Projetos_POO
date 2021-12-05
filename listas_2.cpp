#include <iostream>
#include <list>

using namespace std;

int main(){
    list <int> aula, teste;
    int tam;
    list <int>::iterator it;//iterador para a lista aula e teste

    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    
    tam = 10;
    for(int i = 0; i < tam; i++){
        aula.push_back(i);//insere no final
    }

    it = aula.begin();//inicio da lista
    advance(it, 5);//avança o iterador 5 posições
    aula.insert(it, 10);//insere elementos na posição 5
    aula.erase(--it);//remove elemento na posição 5

    //aula.clear();//limpa a lista

    aula.merge(teste);//junta duas listas

    cout << "Tamanho da lista: " << aula.size() << endl;

    tam=aula.size();
    for(int i = 0; i < tam; i++){
        cout << aula.front() << endl;//imprime o primeiro elemento da lista
        aula.pop_front();//remove o primeiro elemento da lista
    }
    cout << "Tamanho da lista: " << aula.size() << endl;

    return 0;
}
