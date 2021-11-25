#include <iostream>
#include <string>
#include <locale.h>
#include <cstdio>//adiciona comandos da linguagem c

using namespace std;

 //const int LADO = 10; //valores constantes não podem ser alterados

 int main() {
    /*int x {};
    string nome {};

    cin >> x >> nome;
    setlocale(LC_ALL, "Portuguese");
    cout << "Você digitou " << x << " e seu nome e " << nome << endl;*/

    //Variáveis constantes
    //const int {5};
    //const string nome = "uva";
    /*int soma_2_numeros(int x, int y)//regras básicas de nomeclatura pra funções
    int somaDoisNumeros(int x, int y)//regras básicas de nomeclatura pra funções
    {
        return x + y;*/
    //sizeof, unsigned e long
    /*char letra = 'a';
    unsigned long int idade = 48; //apenas valores positivos
    
    float peso = 60.5f;
    double altura = 1.63;

    cout << sizeof(letra) << '\n';
    cout << sizeof(idade) << '\n';
    cout << sizeof(peso) << '\n';
    cout << sizeof(altura) << '\n';*/

    int hora {6};
    int minuto {30};
    float peso {60.5f};

    printf("%d:%d\n", hora, minuto);
    printf("Seu peso e %.2f\n", peso);

    
    return 0;
}