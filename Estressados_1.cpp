//Estressados existe: Alguém com o valor X está na fila?
#include <iostream>
#include <vector>
#include <algorithm>

//existe: Alguém com o valor X está na fila?
bool existe(std::vector<int> fila, int x) {
    for (int i = 0; i < fila.size(); i++) 
        if(fila[i] == x)
            return true;
    return false;        
}


//contar: Quantas vezes o valor X apareceu na fila?
int contar(std::vector<int> fila, int x) {
    int contador = 0;
    for (int i = 0; i < (int) fila.size(); i++)
        if(x == fila[i])
        contador++;
        return contador; 
    
}
//procurar_valor: Em que posição da fila aparece X pela primeira vez?
int procurar(std::vector<int> fila, int x) {
    for (int i = 0; i < (int) fila.size(); i++)
        if(x == fila[i])
            return 1;
        else
            return -1; 
    
}
//procurar_valor_apartir: Dada a posição para iniciar a busca, qual a próxima posição em que aparece X?
int procurar_valor2(std::vector<int> fila, int x, int inicio) {
    for (int i = inicio; i < (int) fila.size(); i++)
        if(x == fila[i])
            return 1;
        else
            return -1; 
    
}
//Melhor caso: 4 funções
//procurar_menor: qual o menor valor da lista?
int procurar_menor(std::vector<int> fila) {
    int menor = {fila[0]};
    for(int i = 0; i < (int) fila.size(); i++)
        if(fila[i] < menor)
        menor = fila[i];
        return menor;
    }
}
//procurar_menor_pos: qual a posição do menor valor da lista?
int procura_menor_pos(std::vector<int> fila){
    int menor_pos = {fila[0]};
    for(int i = 0; i < (int) fila.size(); i++)
        if(fila[i] == menor_pos)
        menor_pos = fila[i];
        return menor_pos;
    }
}
//procurar_menor_pos_apartir: Dada a posição para iniciar a busca, qual a posição do menor valor da lista?
int procurar_menor_pos_apartir(std::vector<int> fila, int inicio){
    int menor_pos = 0;
    for(int i = inicio; i < (int) fila.size(); i++ )
    if(fila[i] < fila[menor_pos]){
        menor_pos = i;
    }
    return menor_pos;
}



int main() {
    int x =  -70;
    int inicio = 5;

    //Busca: 4 funções
    std:cin >> x;
    std::cout << existe({-1, -20, -99, 99, 45, 30, -11}, x ) << "\n" ;
    std::cout << contar({-1, -20, -99, 99, 45, 30, -11}, x ) << "\n" ;
    std::cout << procurar_valor({-1, -20, -99, 99, 45, 30, -11}, x ) << "\n" ;
    std::cout << procurar_valor2({-1, -20, -99, 99, 45, 30, -11}, x, inicio ) << "\n" ;

    //Melhor caso: 4 funções
    std::cout << procurar_menor( {-1, -20, -99, 99, 45, 30, -11} ) << "\n" ;
    std::cout << procurar_menor_pos( {-1, -20, -99, 99, 45, 30, -11} ) << "\n" ;
    std::cout << procurar_menor_pos_apartir( {-1, -20, -99, 99, 45, 30, -11} ) << "\n" ;

    return (0);
}
