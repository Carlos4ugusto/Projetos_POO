#include <iostream>
#include "pilha.h"

using namespace std;
    pilha::pilha() //contrutora // tem que ser o mesmo nome da classe // stack
    {
    tamanho = 0;
    estrutura = new TipoItem[max_itens];
    }
    pilha::~pilha() //destrutora // tem que ser o mesmo nome da classe // stack
    {
        delete [] estrutura;
    }
    bool pilha::estacheia() //verifica se a pilha está cheia // isfull
    {
        return (tamanho == max_itens);
    }
    bool pilha::estavazia() //verifica se a pilha está vazia // isempty
    {
        return (tamanho == 0);
    }
    void pilha::empilhar(TipoItem item) //insere um item na pilha // push
    {
        if (estacheia()){
            cout << "Pilha cheia" << endl;
        }
        else{
            estrutura[tamanho] = item;
            tamanho++;
        }
    }
    TipoItem pilha::remover() //remove um item da pilha // pop
    {
        if (estavazia()){
            cout << "Pilha vazia" << endl;
            return 0;
        }
        else{
            tamanho--;
            return estrutura[tamanho];
        }
    }
    void pilha::imprimir() //imprime a pilha // print
    {
        cout << "Pilha: [ ";
        for (int i = 0; i < tamanho; i++){
            cout << estrutura[i] << " ";
        }
        cout << "]" << endl;
    }
    int pilha::tamanho_pilha() //retorna o tamanho da pilha // size
    {
        return tamanho;
    }


