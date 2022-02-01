#include <iostream>
#include "pilha.h"

using namespace std;

int main(){
    pilha pilha1;
    TipoItem item;
    int opcao;
    cout << "Programa gerador de pilha: \n";

    do {
        cout << "0 - para finalizar o programa!\n";
        cout << "1 - Empilhar \n";
        cout << "2 - Desempilhar \n";
        cout << "3 - Mostrar \n";
        cout << "4 - Sair \n";
        cout << "Opcao: ";
        cin >> opcao;
        if (opcao == 1) {
            cout << "Digite o elemento a ser inserido: ";
                cin >> item;
                pilha1.empilhar(item);
        }
        else if (opcao == 2) {
            pilha1.remover();
            cout << "Elemento Removido: " << item << endl;
        }
        else if (opcao == 3) {
            pilha1.imprimir();
        }
        else if (opcao == 4) {
            cout << "Finalizando o programa!\n";
        }
        else {
            cout << "Opcao invalida!\n";
        }
    } while (opcao != 0);
    return 0;
}