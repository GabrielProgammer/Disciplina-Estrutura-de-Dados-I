#define TAM 40
#define TAMstruct 3

typedef struct game{
char nome[TAM];
	char tipo[TAM];
	int ano, download;
	float nota;
}Game;
void inicializa(Pilha *p);
void vizualização_jogos(Game *p, char auxnome[TAM], char auxtipo[TAM], int auxano, int auxdownload, float aunota);
void insere(Pilha *p, int elemento);
void retira(Pilha *p);
void emprime_últimojogo(Pilha *p, int elemento);
void removejogoda_base(Pilha *p);
void imprime_pilhajogos(Pilha*a);
