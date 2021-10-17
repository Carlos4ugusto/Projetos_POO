#include <iostream>

int main (){
    std::string nome {};
    std::cin >> nome;
    std::cout << "Ola, " << nome << "!" << std::endl;

    std::cout << "Digite sua idade: ";
    int idade {};
    std::cin >> idade; 
    std::cout << "Voce tem " << idade << " anos." << std::endl;

return (0);
}