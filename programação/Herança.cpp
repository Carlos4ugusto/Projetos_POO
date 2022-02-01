#include <iostream>
#include "classes.h"

using namespace std;

int main(){
    Moto *v1 = new Moto();
    Carro *v2 = new Carro();
    v1 -> imprimir();
    v2 -> imprimir();

    return 0;
}
