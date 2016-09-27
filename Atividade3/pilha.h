#define TAMANHO 50

struct pilha{
	
	int pilha[TAMANHO];
	int topo;
    int valor;  
int base;
};

typedef struct pilha Pilha;


void inicializa(Pilha *p);
void insere(Pilha *p, int elemento);
void retira(Pilha *p);
void emprime_topo(Pilha *p, int elemento);
void removebase(Pilha *p);
void remove_meio(Pilha*p, int valor,int topo);
void inverte(Pilha *p);
void imprime_mutiplo7(Pilha *p);
void imprime_pilha(Pilha*a);

