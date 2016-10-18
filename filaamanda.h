#define tam 8

typedef struct Fila{
  int fila[tam];
  int inicio,fim;
}fila;

void inicializa(fila *p);
void insere(fila *p,int elem);
void retira(fila *p);
void imprime(fila *p);
