#include <iostream>
#include <string>

using namespace std;

struct grafite {
    float calibre {0.0};
    string dureza {"HB"};
    int tamanho {0};

    grafite (float calibre, string dureza, int tamanho) {
        this->calibre = calibre;
        this->dureza = dureza;
        this->tamanho = tamanho;
    }
    string toString(){
        return "Calibre: " + to_string(calibre) + " Dureza: " + dureza + " Tamanho: " + to_string(tamanho);
    }
};

struct lapiseira {
    float calibre{0.0};
    grafite _grafite{0.0, "", 0};
    
    lapiseira(float calibre) : calibre{calibre} {
        
    }
    bool inserir_grafite(grafite a){
        if(_grafite.calibre != 0.0){
            cout << "Lapiseira ja possui grafite" << endl;
            return false;
        }
        if(calibre != a.calibre){
            cout << "Calibre diferente" << endl;
            return false;
        }
        _grafite = a;
        return true;
    }
    void remover(){
        _grafite.calibre = 0.0;
        _grafite.dureza = "";
        _grafite.tamanho = 0;
    }
    void escrever(int folhas){
        if(_grafite.tamanho == 0){
            cout << "Lapiseira sem grafite" << endl;
        }
        if(_grafite.dureza == "2B"){
            int contador = 0;
            while(folhas != 0){
                folhas--;
                contador++; 
                _grafite.tamanho -= 1;
                if(_grafite.tamanho <= 0){
                    cout << "O grafite acabou" << endl;
                    remover();
                    break;

                }
            cout << "Foram possíveis escrever " + to_string(contador) + " folhas" << '\n';
    }
    if (_grafite.dureza == "6B"){
        int contador = 0;
        while(folhas != 0){
            folhas--;
            contador++; 
            _grafite.tamanho -= 2;
            if(_grafite.tamanho <= 0){
                cout << "O grafite acabou" << endl;
                remover();
                break;

            }
        cout << "Foram possíveis escrever " + to_string(contador) + " folhas" << '\n';
    }
    if (_grafite.dureza == "8B"){
        int contador = 0;
        while(folhas != 0){
            folhas--;
            contador++; 
            _grafite.tamanho -= 3;
            if(_grafite.tamanho <= 0){
                cout << "O grafite acabou" << endl;
                remover();
                break;

            }
        cout << "Foram possíveis escrever " + to_string(contador) + " folhas" << '\n';
        string toString(){
            string s = "Calibre: " + to_string(calibre) + " Dureza: " + _grafite.dureza + " Tamanho: " + to_string(_grafite.tamanho);
            cout << s << endl;
            return s;            
        }
    };

    int main(){
        grafite a {0.5, "HB", 10};
        lapiseira b {0.5};
        b.inserir_grafite(a);
        b.escrever(5);

        return 0;
    }