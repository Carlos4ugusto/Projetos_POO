//pilha = stack
typedef int TipoItem;
const int max_itens = 100;


class pilha{
    private:
    int tamanho;
    TipoItem* estrutura;

    public:
    pilha(); //contrutora // tem que ser o mesmo nome da classe // stack
    ~pilha(); //destrutora // tem que ser o mesmo nome da classe // stack
    bool estacheia(); //verifica se a pilha está cheia // isfull
    bool estavazia(); //verifica se a pilha está vazia // isempty
    void empilhar(TipoItem item); //insere um item na pilha // push
    TipoItem remover(); //remove um item da pilha // pop
    void imprimir(); //imprime a pilha // print
    int tamanho_pilha(); //retorna o tamanho da pilha // size

};