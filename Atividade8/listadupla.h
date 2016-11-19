typedef struct no
{
    int dado;
    struct no *prox, *ant;
}Lista;

Lista * criaLista();
Lista * insere(Lista *l, int x);
Lista * retira(Lista *l, int valor);
void imprime(Lista *l);
void imprimeInvertido(Lista *l);
Lista * buscaElemento(Lista *l, int valor);
int vazia(Lista *l);
