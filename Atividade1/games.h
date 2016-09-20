typedef struct games{
char nome[100];
	char tipo[100];
	int ano, download;
	float nota;
}Games;


void cria_games(Games *p, char nome, char tipo, int ano, int download, float nota);
void mostra_games(Games *a);
Games *ordena_rating_crescente (Games *a);
void exibe_rating_crescente (Games *a);
Games *ordena_rating_decrescente (Games *a);
void *exibe_rating_decrescente(Games *a);
Games *ordena_tipo (Games *a);
Games *ordena_ano_x (Games *a);
Games *ordena_ano_crescente (Games *a);
Games *ordena_ano_decrescente(Games *a);

