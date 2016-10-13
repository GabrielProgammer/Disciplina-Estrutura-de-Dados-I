#define TAMANHO 10
 struct pilha {
  char jogo[TAMANHO] ;
  
 } ;
typedef struct pilha Pilha;
void vertopo(Pilha *p );
void insere(Pilha *p);
void retira(Pilha *p);

