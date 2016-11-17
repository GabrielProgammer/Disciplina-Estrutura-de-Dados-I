#define TAM 50
typedef struct game
{
    char nome[TAM];
    int ano;
    struct game *prox; 
}Game;

/*typedef struct lista
{
   
}Lista;*/

Game* cria();
Game* insere(Game *p, char nome[TAM], int ano);
void imprime(Game *p);
int vazia(Game *p);
Game* busca(Game *p, char nome[TAM]);
Game* retira(Game *p,  char nome[TAM]);
Game* jogos_recentes(Game *p);
