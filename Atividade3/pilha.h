<<<<<<< HEAD
#define TAMANHO 4

typedef struct pilha
{
	int pilha[TAMANHO];
	int topo;
}Pilha;

void inicializa(Pilha *p);
void insere(Pilha *p, int elemento);
void retira(Pilha *p);
void imprime_topo(Pilha *p);
void imprime_multiplo7(Pilha *p);
void imprime_pilha(Pilha *p);
=======
#define TAMANHO 50

struct pilha{
	
	int pilha[TAMANHO];
	int topo;
    int valor;  
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
>>>>>>> b534d0fb9d60e22932e1fb1e0cd33db88ee6f1e9
