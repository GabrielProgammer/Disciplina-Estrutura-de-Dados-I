#define TAM 10


typedef struct pilha{
int pilha[TAM]
int topo;
}Pilha;


void inicializa_pilha(Pilha *p);
void insere_pilha(Pilha *p, int elem);
void retira_pilha(Pilha *p);
void imprimetopo_pilha(Pilha *p);
void removebase_pilha(Pilha *p);
void removeelemento(Pilha *p);
void inverte_pilha(Pilha *p);
void imprime_elementos(Pilha *p);
