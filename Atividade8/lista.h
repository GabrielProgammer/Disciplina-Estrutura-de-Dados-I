struct no{
int dado;
struct no *prox;
};

typedef struct no Lista;

Lista* cria();
Lista* insere(Lista *l, int x);
void imprime(Lista *l);
int vazia(Lista *l);
Lista* busca( Lista *l, int x);
Lista* retira(Lista *l, int valor);
void inserefinal( Lista *l, int valor);
