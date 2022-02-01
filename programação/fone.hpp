#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <memory>

using namespace std;

class Fone {
    string numero {""};
    string label {""};
public:
    Fone(string numero, string label) : numero(numero), label(label) 
        string getlabel() { return label; }
        string getnumero() { return numero; }
        friend ostream& operator<<(ostream& os, Fone& fone);
};
ostream& operator<<(ostream& os, Fone& fone){
    os << fone.getnumero() << " " << fone.getlabel() << endl;
    return os;
}