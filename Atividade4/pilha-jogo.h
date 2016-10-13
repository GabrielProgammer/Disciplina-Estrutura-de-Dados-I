#define TAM 50
#define TSTRUCT 3
int i;

typedef struct game
{
	char nome[TAM];
	int ano;
}Game;

typedef struct visualizados
{
	int topo;
	char visualizado[TAM];
}Visualizados;

<<<<<<< HEAD
void inicia(Game *p);
void cadastra(Game *p, char nome[TAM], int ano);
void mostra_games(Game *p);
void visualiza(Game *p, char nome[TAM]);
=======
void inicia(Visualizados *g);
void cadastra(Game *p, char nome[TAM], int ano);
void visualiza(Game *p, Visualizados *g, char nome[TAM]);
void ver_ultimo_jogado(Visualizados *g);
void exclui_ultimo_jogado(Visualizados *g);
>>>>>>> ae7e017bd3ee72119b0bb3e4df8929b13d63ab91
