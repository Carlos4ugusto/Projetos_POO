#include <iostream>

using namespace std;

int pegar_cinco(){
    return 5;
}

int somar_dois(int a, int b){
    return a + b;
}
//retorno no meio
string verificar_idade(int idade){
    if(idade < 18)
    return "menor de idade";
    if(idade < 65)
    return "adulto";
    return "idoso";//return default
}
//argumento default
int soma(int a, int b, int c = 0){
    return a + b + c;
}
//cópia e referência
void incrementa(int& a){//referência
    a++;
}
//referências constantes
void mostrar(const int& a){
    cout << a << endl;
}

int main(){
    /*int y {4};
    int x = pegar_cinco();
    cout << y << endl << x << endl;*/

    /*int x {6}, y {7};
    int z {somar_dois(x, y)};
    cout << z << endl;*/
    
    /*int x = 0;
    cin >> x;
    cout << verificar_idade(x) << endl;*/
    
    //ordem de argumentos
    /*cout << soma(1, 2) << endl;
    cout << soma(1, 2, 5) << endl;*/

    /*int a = 0;
    incrementa(a);
    cout << a << endl;*/
    
    int a = 0;
    mostrar(a);
    mostrar(9);

    return 0;
}