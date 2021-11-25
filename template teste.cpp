#include <iostream>
#include <conio.h>
#include <typeinfo>

using namespace std;

template <class TIPODADO>
TIPODADO funcao(TIPODADO a);


int main(){

    cout << funcao( 10);
    cout << funcao( 3.14);
    cout << funcao( 3.13439299);

getch ();
return 0;
}

template <class TIPODADO>
TIPODADO funcao(TIPODADO a ){
    cout << typeid ( a ).name() << endl;
    return ++a;
}