#define TAM 40		// Tamanho das strings a serem usadas

typedef struct games
{
	char nome[TAM];
	char tipo[TAM];
	int ano, download;
	float nota;
}Game;

void cria_games(Game *p, char nome[TAM], char tipo[TAM], int ano, int download, float nota);
/*
void mostra_games(Games *a);
Games *ordena_rating_crescente (Games *a);
void exibe_rating_crescente (Games *a);
Games *ordena_rating_decrescente (Games *a);
void *exibe_rating_decrescente(Games *a);
Games *ordena_tipo (Games *a);
Games *ordena_ano_x (Games *a);
Games *ordena_ano_crescente (Games *a);
Games *ordena_ano_decrescente(Games *a);
*/

