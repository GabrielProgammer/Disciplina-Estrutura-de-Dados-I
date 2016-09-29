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

void inicia(Game *p);
void cadastra(Game *p, char nome[TAM], int ano);
void mostra_games(Game *p);
void visualiza(Game *p, char nome[TAM]);