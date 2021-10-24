#include <iostream>
#include <string>

struct Gato {
    std::string nome {""};
    int vidas {0};
};
Gato(){
    std::cout << "Gato nascendo usando construtor default \n";
}

Gato(std::string nome)
this->nome = nome;
this->vidas = 3;
std::cout << "Gato nascendo usando construtor que recebe  uma string \n";
}

int main() {
    Gato lena;
    lena.nome = "Lena";
    lena.vidas = 3;
    std::cout << lena.nome << " tem " << lena.vidas << " vidas" << std::endl;
    //se quiser criar outro gato
    /*Gato garfield;
    garfield.nome = "Garfield";
    garfield.vidas = 5;
    std::cout << garfield.nome << " tem " << garfield.vidas << " vidas" << std::endl;*/
    //chamando o construtor
    Gato fco {"fco"};
    std::cout << fco.nome << " tem " << fco.vidas << " vidas" << std::endl;



}