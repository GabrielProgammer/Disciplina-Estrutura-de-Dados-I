#define TAM 50

typedef struct game
{
    char nome[TAM];
    int ano;
    struct game *prox, *ant; 
}Game;

Game* cria();
Game*insere(Game *p, char nome[TAM], int ano);
void lista_elementos(Game *p);
Game*busca(Game *p, char nome[TAM]);
Game*retira(Game *p, char nome[TAM]);

