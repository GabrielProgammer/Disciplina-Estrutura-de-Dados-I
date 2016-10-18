#define TAMANHO 10

typedef struct fila{
  int fila[TAMANHO];
  int inicio,fim;
}Fila;


void inicializa(Fila *f);
void insere (Fila *f,int elem);
void retira(Fila *f);
void imprimefim(Fila *f);
void imprimeinicio(Fila *f);
void imprimefila(Fila *f);
void retiratodos(Fila *f, int elem);
void contrario(Fila *f);
