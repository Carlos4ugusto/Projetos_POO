#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    /*auto x {6.6};
    auto y {4.5};
    float a = 5.0/6;
    cout << x << endl << y << endl << a << endl;*/
    
    /*int num {6};
    cout << (char) ('0' + num) << '\n';//conversão para caractere "char"*/

    /*auto valor {0};
    valor = 5 + 1.3 + 'a';
    cout << valor << endl;
    cout << string("") + "eu " + "vou" + '\n';*/
    /*int x  {5};
    int y {x++};//++x incrementa primeiro e x++ incrementa depois
    
    cout << x << endl << y << endl;*/

    /*bool chovendo {true};
    bool fome {false};
    chovendo || fome;
    chovendo && fome;
    ! chovendo;*/

    /*int value;
    cin >> value;
    if (value == 1)
    cout << "um\n";
    if (value == 2)
    cout << "dois\n";
    if (value == 3)
    cout << "três\n";
    if (value == 4)
    cout << "quatro\n";
    else
    cout << "Número não encontrado\n";*/

    int value {-6};
    bool value1 {true};
    cout << (value1 ? "true" : "false") << '\n';
    cout << value1 << '\n';
    cout << (value > 0 ? value : -value) << '\n';

}