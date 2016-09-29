#define TAM 40
#define TAMstruct 3

 struct game{
char nome[TAM];
	char tipo[TAM];
	int ano, download;
	float nota;
	int topo;
};
typedef struct game Game;
void inicializa(Game *p);
void insere_jogos(Game *p, char nome[TAM]);
void retira(Game *p);
void emprime_ultimojogo(Game *p, char nome[TAM]);
void removejogoda_base(Game *p);
void imprime_pilhajogos(Game*p);
