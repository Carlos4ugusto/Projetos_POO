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
        Lapiseira lapiseira {0.5};

        while (true){
            cout << "1 - Inserir grafite" << endl;
            cout << "2 - Remover grafite" << endl;
            cout << "3 - Escrever" << endl;
            cout << "4 - Sair" << endl;
            int opcao;
            cin >> opcao;
            switch (opcao){
                case 1:
                    cout << "Calibre: ";
                    float calibre;
                    cin >> calibre;
                    cout << "Dureza: ";
                    string dureza;
                    cin >> dureza;
                    cout << "Tamanho: ";
                    int tamanho;
                    cin >> tamanho;
                    grafite g {calibre, dureza, tamanho};
                    if(lapiseira.inserir_grafite(g)){
                        cout << "Grafite inserido com sucesso" << endl;
                    }
                    break;
                case 2:
                    lapiseira.remover();
                    cout << "Grafite removido com sucesso" << endl;
                    break;
                case 3:
                    cout << "Folhas: ";
                    int folhas;
                    cin >> folhas;
                    lapiseira.escrever(folhas);
                    break;
                case 4:
                    return 0;
                default:
                    cout << "Opção inválida" << endl;
            }
        }
        return 0;
    }