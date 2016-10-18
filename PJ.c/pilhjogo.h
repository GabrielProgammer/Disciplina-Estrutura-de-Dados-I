#define TAMANHO 4

 struct pilha{
  int pilha[TAMANHO];
  int topo;
  char jogo;
};

typedef struct pilha Pilha;

void inicia_pilha(Pilha *p);
void insere(Pilha *p,char jogo);
void retira_topo(Pilha *p);
void imprime_topo(Pilha *p);



