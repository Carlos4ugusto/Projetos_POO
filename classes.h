#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

#endif // CLASSES_H_INCLUDED

using namespace std;

class Veiculo
{
    public:
        int velocidade;//atributo da classe 
        int blindagem;//atributo
        int rodas;//atributo
        void settipo(int tp);
        void setvelocidadeMaxima(int vm);
        void setarma(bool ar);
        void imprimir();
    private:
        int tipo;//atributo privado
        int velocidadeMaxima;
        bool arma;
};

        void Veiculo::settipo(int tp){
            tipo = tp;
        }
        void Veiculo::setvelocidadeMaxima(int vm){
            velocidadeMaxima = vm;
        }
        void Veiculo::setarma(bool ar){
            arma = ar;
        }
        void Veiculo::imprimir(){
            cout << "Tipo: " << tipo << endl;
            cout << "Velocidade Maxima: " << velocidadeMaxima << endl;
            cout << "Arma: " << arma << endl;
        }
class Moto: public Veiculo
{
    public:
    Moto();//construtor
};
class Carro: public Veiculo
{
    public:
        Carro();
};

Moto::Moto(){//construtor
    velocidade = 0;
    blindagem = 0;
    rodas = 2;
    settipo(1);
    setvelocidadeMaxima(200);
    setarma(false);

}
Carro::Carro(){
    velocidade = 0;
    blindagem = 0;
    rodas = 4;
    settipo(2);
    setvelocidadeMaxima(170);
    setarma(true);
}

    