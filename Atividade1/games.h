typedef struct games{
char nome[100];
	char tipo[100];
	int ano, downloads;
	float nota;
}Games;


void cria_games(Games *p, char nome, char tipo, int ano, int downloadas, float nota);
void mostra_games(Games *a);
void rating(Games *a, float nota);
void avaliacao(Games *a, char tipo);
void estilo(Games *a, char tipo);
void lancamento(Games *a, int ano);
void alfabetica(Games *a, char nome);
