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