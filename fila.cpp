#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<string> cartas;

    cartas.push("k");//insere na fila
    cartas.push("q");
    cartas.push("j");
    cartas.push("a");

    cout << "tamanho da fila" << cartas.size() << endl;//
    cout << "primeira carta: " << cartas.front() << endl;
    cout << "ultima carta: " << cartas.back() << endl;
    
    while(!cartas.empty()){//enquanto a fila não estiver vazia
        cout << "primeira carta: " << cartas.front() << endl;
        cartas.pop();//remove a primeira carta da fila
        !cartas.empty() ? cout << "tamanho da fila" << " " << cartas.size() << endl : cout << "fila vazia" << endl;//se a fila não estiver vazia, imprime o tamanho da fila, senão imprime a mensagem "fila vazia"

    }
}