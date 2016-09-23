#define TAMANHO 10

struct pilha
{
	int pilha[TAMANHO];
	int topo;
}

typedef struct pilha Pilha;

void inicializa(Pilha *p);
void insere(Pilha *p, int elem);
void retira(Pilha *p);
void imprime_topo(Pilha *p);
